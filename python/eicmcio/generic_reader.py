"""

Universal parser for text files from generators. It aims for cases:
1. Files have are space/tab separated data values
2. Each event start with one line of data
3. Then there are several lines with data for each particle in event
4. (!) number of tokens in event and particle line should be different

2-3. Means that if we see an event record after particle records
     it means, that the new event has started

 This class works for files like from pythia6, beagle, etc...

 D A T A   E X A M P L E:
 Lets look at beagle event record:
      BEAGLE EVENT FILE
      ============================================
      I, ievent, ...
      ============================================
      I  ISTHKK(I)  ...
      ============================================
      0          1    1   11    2    1    ... <50+ tokens>
      ============================================
       1     21         11        0       -0.000000       -0.000000       -5.000000  ... <15 tokens>
       2     21       2212        0        0.000000        0.000000       50.107677  ...
      ...
      20      1       2212        0        0.018354        0.019732       45.588296  ...
      =============== Event finished ===============
      0          2    1   11    2    1 ... <next event >
      ============================================
      1     21         11        0        0.000000        0.000000       -5.000000 ...
 What we see here is:
     1. First 5 lines are to be skipped
     2. Lines with '====================' are to be skipped
     3. Lines like "0 1 1 11 2 1 ..." are the beginning of event data with whole vent info
     4. All the next lines like "1 21 22122 ..." are particle data lines (called record in this class)
     5. All lines in 3 and 4 need to be tokenized
     6. In other file formats comments like '#...' should be ignored

 As a result of parsing we will have and event in terms of :
  TextFileEvent:
      started_at_line;    // Line number at which the event has started
      event_tokens;       // All tokens like ["0", "1", "1", "11", "2", "1", ...] from 'event' related line/s
      record_tokens       // All tokens like ["1", "21", "22122", ...] from each particle or 'record' lines


"""
import io
import enum
import shlex
from typing import AnyStr, Callable


class UnparsedTextEvent:
    """Unparsed """
    def __init__(self):
        self.start_line_index=0
        self.event_tokens = []
        self.particle_tokens = []


class GenericTextReader:
    """Generic class to read EIC related text MC file formats"""

    buffer_size = 65536

    def __init__(self, is_line_relevant: Callable, is_event: Callable, is_particle: Callable, skip_lines: int = 0):
        self.file_path = ""
        self.file: [io.TextIOBase, None] = None
        self.line_index = 0
        self.skip_lines = skip_lines
        self.is_line_relevant = is_line_relevant
        self.is_event_line = is_event
        self.is_particle_line = is_particle
        self.last_record_was_particle = False

    def open(self, file_path):
        self.file_path = file_path
        self.file = open(self.file_path)

    def close(self):
        if self.file:
            self.file.close()

    def events(self):
        event: UnparsedTextEvent = UnparsedTextEvent()

        while True:
            lines = self.file.readlines(self.buffer_size)
            if not lines:
                break
            for line in lines:
                assert isinstance(line, str)
                line = line.strip()

                # Checks if the line is not empty, is comment, or in skip range
                if self._should_skip_line(line):
                    self.line_index += 1
                    continue

                # tokenize line
                tokens = shlex.split(line)

                # Is it a beginning of a new event?
                if self.is_event_line(tokens):
                    if self.last_record_was_particle:
                        yield event
                        event = UnparsedTextEvent()

                    # Add tokens
                    event.start_line_index = self.line_index
                    event.event_tokens = tokens
                    self.last_record_was_particle = False

                # It is a particle record
                if self.is_particle_line(tokens):
                    self.last_record_was_particle = True
                    event.particle_tokens.append(tokens)

                # increment line count in the end
                self.line_index += 1

        # End... Do we have some event prepared?
        if event.event_tokens or event.particle_tokens:
            yield event

    def _should_skip_line(self, line):
        """Checks if the line is not empty, is comment, or in skip range"""
        if not line:
            return True

        if self.line_index < self.skip_lines:
            return True

        return not self.is_line_relevant(line)
