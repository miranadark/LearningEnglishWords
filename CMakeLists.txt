cmake_minimum_required(VERSION 3.15)
project(LearningEnglishWords)

set(CMAKE_CXX_STANDARD 14)

file(MAKE_DIRECTORY build/bin)
file(COPY src/ DESTINATION build/bin)

add_subdirectory(test/lib/gtest)
include_directories(test/lib/gtest/googletest/include)


add_executable(LearningEnglishWords src/main.cpp src/GameMenu.h src/Game.h src/CheckInput.h)
target_link_libraries(LearningEnglishWords gtest)