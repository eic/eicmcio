C++ development
===============

For unit testing Catch2 unit test framework is used:

- https://github.com/catchorg/Catch2
- https://github.com/catchorg/Catch2/blob/devel/docs/tutorial.md#top



Developing with VSCode
----------------------

Install plugins:

- https://code.visualstudio.com/docs/languages/cpp
- CMake
- CMake Tools
- reStructuredText (for documentation)


Point to CMakeLists.txt in cpp directory


PODio
-----

To regenerate all PODio classes: 

 .. code:: bash

    # From the project root
    python cpp/podio/v00-13/python/podio_class_generator.py ../examples/datalayout.yaml cpp/eicmcio/podio data ROOT