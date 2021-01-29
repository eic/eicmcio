#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "podio::podio" for configuration "Debug"
set_property(TARGET podio::podio APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(podio::podio PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libpodio.so"
  IMPORTED_SONAME_DEBUG "libpodio.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS podio::podio )
list(APPEND _IMPORT_CHECK_FILES_FOR_podio::podio "${_IMPORT_PREFIX}/lib/libpodio.so" )

# Import target "podio::podioDict" for configuration "Debug"
set_property(TARGET podio::podioDict APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(podio::podioDict PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libpodioDict.so"
  IMPORTED_SONAME_DEBUG "libpodioDict.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS podio::podioDict )
list(APPEND _IMPORT_CHECK_FILES_FOR_podio::podioDict "${_IMPORT_PREFIX}/lib/libpodioDict.so" )

# Import target "podio::podioRootIO" for configuration "Debug"
set_property(TARGET podio::podioRootIO APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(podio::podioRootIO PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libpodioRootIO.so"
  IMPORTED_SONAME_DEBUG "libpodioRootIO.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS podio::podioRootIO )
list(APPEND _IMPORT_CHECK_FILES_FOR_podio::podioRootIO "${_IMPORT_PREFIX}/lib/libpodioRootIO.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
