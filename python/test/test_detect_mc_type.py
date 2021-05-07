from eicmcio import detect_mc_type

import os
import unittest
from eicmcio import detect_mc_type, McFileTypes



class TestStringMethods(unittest.TestCase):

    def setUp(self) -> None:
        dir_path = os.path.dirname(os.path.realpath(__file__))
        self.data_path = os.path.join(dir_path, 'data')

    def _get_file_path(self, path):
        """Gets data file path"""
        return os.path.join(self.data_path, path)


    def test_beagle(self):
        """Test detecting BeaGLE file type"""

        result = detect_mc_type(self._get_file_path('beagle_3events.txt'))
        self.assertEqual(result, McFileTypes.BEAGLE)

    def test_hepmc2(self):
        """Test detecting HepMC2 file type"""

        result = detect_mc_type(self._get_file_path('hepmc2.hepmc'))
        self.assertEqual(result, McFileTypes.HEPMC2)

    def test_hepmc3(self):
        """Test detecting BeaGLE file type"""

        result = detect_mc_type(self._get_file_path('hepmc3.hepmc'))
        self.assertEqual(result, McFileTypes.HEPMC3)



if __name__ == '__main__':
    unittest.main()