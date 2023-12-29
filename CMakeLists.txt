cmake_minimum_required(VERSION 3.0.0)
project(DataEnhancementForObjectDetect VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(DataEnhancementForObjectDetect main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin)
include(CPack)
