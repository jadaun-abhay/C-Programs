cmake_minimum_required(VERSION 3.28)

project(C_Programs)

set(SRC_DIR ${CMAKE_SOURCE_DIR}/src)

add_executable(main "${CMAKE_SOURCE_DIR}/src/main.c")
add_executable(fibonacci_series "${CMAKE_SOURCE_DIR}/src/FibonacciSeries.c")
add_executable(prime_number "${SRC_DIR}/PrimeNumber.c")
