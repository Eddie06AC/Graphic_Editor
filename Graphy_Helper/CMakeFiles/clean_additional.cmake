# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\tttt_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\tttt_autogen.dir\\ParseCache.txt"
  "tttt_autogen"
  )
endif()
