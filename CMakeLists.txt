cmake_minimum_required(VERSION 3.0.0)
project(DataEnhancementForObjectDetect VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

set(MY_INCLUDE include
include/file
)
include_directories(${MY_INCLUDE})

set(SOURCE main.cpp
src/file/PathUtils.cpp
)
add_executable(DataEnhancementForObjectDetect ${SOURCE})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin)
include(CPack)
