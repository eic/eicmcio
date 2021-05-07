import enum


class McFileTypes (enum.Enum):
    """Enumeration of known formats (unique strings)

    (!) Warning (!) Inside this library use 'import .file_types' not 'import eicmcio.file_types'
    https://stackoverflow.com/a/61395054/548894

    Another thing on enums - values are uppercase because they are constants
    https://stackoverflow.com/a/21359677/548894
    """
    UNKNOWN = "unknown"
    BEAGLE = "beagle"
    HEPMC2 = "hepmc2"
    HEPMC3 = "hepmc3"
    PYTHIA_BNL = "pythia_bnl"
    PYTHIA_LUND = "pythia_lund"
    PYTHIA_GEMC = "pythia_gemc"
