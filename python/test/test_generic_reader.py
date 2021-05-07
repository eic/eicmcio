from eicmcio import GenericTextReader, UnparsedTextEvent

import os
import unittest
from eicmcio import detect_mc_type, McFileTypes



class TestGenericTextReader(unittest.TestCase):

    def setUp(self) -> None:
        pass

    def _mc_file_path(self, path):
        """Gets data file path"""
        dir_path = os.path.dirname(os.path.realpath(__file__))
        return os.path.join(dir_path, 'data', path)

    def test_read_file(self):
        """Test detecting BeaGLE file type"""

        def is_line_relevant (line):
            is_comment = any(word in line for word in ['BEAGLE', 'I', '='])
            return not is_comment

        def is_event(tokens):
            return len(tokens) > 20 # Beagle event header has like 50 tokens, particle like 16

        def is_particle(tokens):
            return len(tokens) < 20

        reader = GenericTextReader(is_line_relevant, is_event, is_particle)
        reader.open(self._mc_file_path('beagle_3events.txt'))

        events = [event for event in reader.events()]
        self.assertEqual(len(events), 3)
        self.assertEqual(events[0].start_line_index, 6)        # The first event is on line index 6
        self.assertEqual(len(events[0].particle_tokens), 11)   # There are 11 particles
        self.assertEqual(events[0].particle_tokens[0][2], "11")  # There are 11 particles
        self.assertEqual(events[0].event_tokens[6], "-5")  # There are 11 particles
