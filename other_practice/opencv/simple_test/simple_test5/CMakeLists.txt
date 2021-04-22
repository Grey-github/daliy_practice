cmake_minimum_required (VERSION 3.5)

project (demo)

option (MYDEBUG "enble debug compilation" ON)

set (EXECUTABLE_OUTPUT_PATH ${PROJECT_OUTPUT_DIR}/bin)

add_subdirectory (src)
