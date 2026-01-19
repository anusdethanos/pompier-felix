# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/appPompier-Qt-Quick_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/appPompier-Qt-Quick_autogen.dir/ParseCache.txt"
  "appPompier-Qt-Quick_autogen"
  )
endif()
