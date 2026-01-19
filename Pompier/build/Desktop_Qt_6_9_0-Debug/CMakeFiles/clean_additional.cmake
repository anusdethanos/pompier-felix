# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/Pompier_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/Pompier_autogen.dir/ParseCache.txt"
  "Pompier_autogen"
  )
endif()
