cmake_minimum_required (VERSION 2.6)
project (RFM69)
add_executable(rfm69_test test.cpp)
include_directories("${PROJECT_BINARY_DIR}")

add_library(SPI wiringPiSPI.c)
add_library(RFM RFM69.cpp)

target_link_libraries(rfm69_test RFM)
target_link_libraries(RFM SPI)

set(CMAKE_BUILD_TYPE Debug)

