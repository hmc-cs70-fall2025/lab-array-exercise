/*
 * C++ Program to demonstrate the use of arrays.
 *
 * compile and run with with (paste all three lines at once in your terminal): 
       clang++ -std=c++17 -Wall -Wextra -pedantic -c arrays.cpp && \
       clang++ -o arrays arrays.o && \
       ./arrays
 *
 * Your task:
 *    - Read the code and think about what it'll do.
 *        - What will happen for the part where it prints the array itself?
 *    - Compile and run the program.
 *        - Did it do what you expected?  (You may need to scroll up to see
 *          the output of the first part; you could expand the terminal window
 *          to make it easier to see).
 *    - Change array access to use the * operator instead of [].
 *        - Remember the form a[i] is equvalent to *( ... ) <- figure it out
 *        - You can just change that initializes the array if you like.
 *        - Compile, link and run it to check it works the same.
 *    - Change the array indexing to be i[numbers] instead of numbers[i]
 *        - Before you compile, speculate about whether this will compile,
 *          and if so so, whether it will work the same and why?
 *        - Compile, link and run to find out.
 *    - Change the array indexing back to normal.
 *    - Change the first for loop to be `< ARRAY_SIZE+4`, overstepping the
 *      bounds of the array.
 *        - Why is this "illegal" in C++'s world?  Results in...
 *        - BEFORE you run it, speculate about what will happen with partner(s)
 *        - Compile, link and run it.
 *        - What is *so* bad about this?
 *        - What is *good* about it?
 *    - Change `x` and `y` to be `float` instead of `int`.
 *        - BEFORE you run it, speculate about what will happen with partner(s)
 *        - Compile, link and run it.
 *        - Did this change anything?
 *    - Run the program with using valgrind:   valgrind ./arrays
 *        - Did this help?
 *    - Rerun clang commands adding: -fsanitize=undefined,address,bounds to
 *      both clang++ commands, like this:
        clang++ -fsanitize=undefined,address,bounds -std=c++17 -Wall -Wextra \
          -pedantic -c arrays.cpp && \
        clang++ -fsanitize=undefined,address,bounds -o arrays arrays.o && \
        ./arrays
 *        - Add this option to the very front of BOTH clang++ commands
 *        - Did this help?
 */

#include <iostream>
#include <cstddef>

int main() {
    constexpr size_t ARRAY_SIZE = 10;
    int x = 42;
    int numbers[ARRAY_SIZE];
    int y = 54;

    // Initialize the array
    for (size_t i = 0; i < ARRAY_SIZE; ++i) {
        numbers[i] = int(i) + 100;
    }

    // Print the array itself
    std::cout << numbers << std::endl;

    // Print the array elements
    for (size_t j = 0; j < ARRAY_SIZE; ++j) {
        std::cout << "Element at index " << j << " : "
                  << numbers[j] << std::endl;
    }

    // Print x and y to show they are unchanged
    std::cout << "x == " << x << ", y == " << y << std::endl;

    return 0;
}