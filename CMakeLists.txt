cmake_minimum_required(VERSION 3.6)
project(thread_pool)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -pthread")

set(SOURCE_FILES main.cpp locker.h locker.cpp threadpool.h base_event.h)
add_executable(thread_pool ${SOURCE_FILES})