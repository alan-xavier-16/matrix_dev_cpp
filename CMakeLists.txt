# Define cmake version
cmake_minimum_required(VERSION 3.19)

# Project name
project(matmul 
  VERSION 1.0 
  DESCRIPTION "Square Matrix Multiplication" 
  LANGUAGES CXX)

# Set C++ standard
set(CMAKE_CXX_STANDARD 20)

# Set compiler options
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++20 -Wall -Wextra -Wpedantic")

# Define Target
add_executable(matmul
  src/main.cpp
  src/Matrix.h
  src/Matrix.cpp)