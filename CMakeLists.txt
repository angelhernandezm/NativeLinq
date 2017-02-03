cmake_minimum_required(VERSION 3.5)
project(NativeLinq)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

set(SOURCE_FILES main.cpp LinqCore.h Contact.h CommonHeaders.h)
add_executable(NativeLinq ${SOURCE_FILES} LinqCore.h Contact.h CommonHeaders.h)