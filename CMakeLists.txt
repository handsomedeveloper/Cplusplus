cmake_minimum_required(VERSION 3.14)
project(learning)

set(CMAKE_CXX_STANDARD 17)
aux_source_directory(. DIR_SOURCE_CODE)

add_executable(learning ${DIR_SOURCE_CODE})