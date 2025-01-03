cmake_minimum_required(VERSION 3.28)

project(C_Programs)

set(SRC_DIR ${CMAKE_SOURCE_DIR}/src)
set(MATRIX_DIR ${SRC_DIR}/matrix_programs)
set(NUM_SYS_DIR ${SRC_DIR}/number_system_programs)

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
add_executable(reverse_number "${SRC_DIR}/ReverseNumber.c")
add_executable(swap_numbers "${SRC_DIR}/SwapNumbers.c")
add_executable(matrix_multiplication "${MATRIX_DIR}/MatrixMultiplication.c")
add_executable(decimal_to_binary "${NUM_SYS_DIR}/DecimalToBinary.c")
add_executable(matrix_transpose "${MATRIX_DIR}/MatrixTranspose.c")

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
