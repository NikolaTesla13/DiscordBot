cmake_minimum_required(VERSION 3.13)
project(RMS_Bot)

set(CMAKE_CXX_STANDARD 17)

add_executable(RMS_Bot Source/Main.cpp)

find_package(OpenSSL REQUIRED)
target_link_libraries(RMS_Bot OpenSSL::SSL OpenSSL::Crypto)

add_subdirectory(Vendor/sleepy-discord)
target_link_libraries(RMS_Bot sleepy-discord)
include_directories(Vendor/sleepy-discord/include)