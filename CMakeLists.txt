cmake_minimum_required(VERSION 3.15)
project(LearningEnglishWords)

set(CMAKE_CXX_STANDARD 14)

file(MAKE_DIRECTORY build/bin)
file(COPY src/ DESTINATION build/bin)

add_executable(LearningEnglishWords main.cpp)