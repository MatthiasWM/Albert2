#
# CMake build file for commmand line tools that statically analyse NewtonOS
# using the debug ROM and REx images, Driver Developers Kit include files,
# and whatever else resources are publically available
# 

cmake_minimum_required(VERSION 3.1...3.27)

# This is your project statement. You should always list languages;
# Listing the version is nice here since it sets lots of useful variables
project(
  Albert
  VERSION 2.0
  LANGUAGES CXX)


add_executable(analyze 
  analyze.cpp
  analyze.h
)

