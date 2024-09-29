cmake_minimum_required(VERSION 3.23)
project(LeetCode)

set(CMAKE_CXX_STANDARD 17)

add_executable(LeetCode
        Arrays_and_strings/reverse_strings.cpp
        Arrays_and_strings/squares_of_a_sorted_array.cpp
        Arrays_and_strings/max_consecutive_ones_3.cpp
        Arrays_and_strings/k_radius_subarray_averages.cpp)
