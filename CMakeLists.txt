cmake_minimum_required(VERSION 3.28)

project(C_Programs)

set(SRC_DIR ${CMAKE_SOURCE_DIR}/src)

add_executable(main "${CMAKE_SOURCE_DIR}/src/main.c")
add_executable(fibonacci_series "${CMAKE_SOURCE_DIR}/src/FibonacciSeries.c")
add_executable(prime_number "${SRC_DIR}/PrimeNumber.c")
add_executable(palindrome_number "${SRC_DIR}/PalindromeNumber.c")
add_executable(compare_strings "${SRC_DIR}/StringComparison.c")
add_executable(factorial "${SRC_DIR}/Factorial.c")
add_executable(armstrong_number "${SRC_DIR}/ArmstrongNumber.c")
add_executable(sum_of_digits "${SRC_DIR}/DigitSummation.c")
add_executable(concatenate_string "${SRC_DIR}/StringConcatenation.c")
add_executable(digit_frequency "${SRC_DIR}/FrequencyOfDigit.c")

set(EXECUTABLES
    main
    fibonacci_series
    prime_number
    palindrome_number
    compare_strings
    factorial
    armstrong_number
    sum_of_digits
)

foreach(executable ${EXECUTABLES})
    target_link_libraries(${executable} m)
endforeach()
