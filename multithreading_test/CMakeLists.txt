cmake_minimum_required(VERSION 3.0.0)
project(mt_test VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(mt_test main.cpp)

TARGET_LINK_LIBRARIES(mt_test pthread)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
