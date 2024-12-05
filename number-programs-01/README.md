Number Programs in C
====================

This C program provides various number-related operations for practice. You can perform the following operations based on user input:

*   Add two integers
*   Find the Greatest Common Divisor (GCD) of two numbers
*   Find the Least Common Multiple (LCM) of two numbers
*   Check if a number is prime
*   Count the number of digits in an integer
*   Calculate the power of a number
*   Print prime numbers from 1 to N
*   Display Armstrong numbers between two intervals
*   Check if a number is divisible by 3 and 5
*   Print numbers divisible by 3 and 5 from 1 to 100
*   Check if a number is abundant
*   Find the sum of digits of a number
*   Display factors of a number
*   Swap the first and last digits of a number
*   Print the cube of numbers from 1 to N
*   Exit the program

How to Run the Code:
--------------------

Follow the steps below to compile and run the program:

1.  **Step 1:** Save the code in a file named `number-programs.c`.
2.  **Step 2:** Open your terminal or command prompt.
3.  **Step 3:** Compile the program using GCC by running the following command:
    
    gcc number-programs.c -o number-programs -lm
    
    The `-lm` flag is necessary to link the math library for functions like `sqrt` and `pow`.
4.  **Step 4:** After the program compiles successfully, run it by typing:
    
    ./number-programs
    

Menu Options:
-------------

When you run the program, you will be presented with a menu where you can choose the operation you want to perform. The menu will look like this:

\=== Number Operations Menu ===
1. Add two integers
2. Find GCD of two numbers
3. Find LCM of two numbers
4. Check if number is prime
5. Count number of digits in an integer
6. Calculate the power of a number
7. Print prime numbers from 1 to N
8. Display Armstrong numbers between two intervals
9. Check if a number is divisible by 3 and 5
10. Print numbers divisible by 3 and 5 from 1 to 100
11. Check abundant number
12. Find sum of digits of a number
13. Display factors of a number
14. Swap first and last digits of a number
15. Print cube of a number up to an integer
16. Exit
Enter your choice:
    

Explanation of Functions:
-------------------------

*   **Add two integers:** Adds two numbers and displays the result.
*   **Find GCD of two numbers:** Calculates and displays the Greatest Common Divisor (GCD) of two numbers using Euclid's algorithm.
*   **Find LCM of two numbers:** Computes and displays the Least Common Multiple (LCM) of two numbers using the formula: LCM(a, b) = (a \* b) / GCD(a, b).
*   **Check if number is prime:** Checks whether a given number is prime.
*   **Count number of digits in an integer:** Counts and displays the number of digits in an integer.
*   **Calculate the power of a number:** Computes the power of a given base raised to an exponent.
*   **Print prime numbers from 1 to N:** Displays all prime numbers between 1 and a given number N.
*   **Display Armstrong numbers:** Displays Armstrong numbers between two specified intervals.
*   **Check divisibility by 3 and 5:** Checks whether a given number is divisible by both 3 and 5.
*   **Print numbers divisible by 3 and 5:** Displays all numbers divisible by both 3 and 5 between 1 and 100.
*   **Check abundant number:** Checks if a number is abundant (i.e., if the sum of its divisors is greater than the number itself).
*   **Find sum of digits of a number:** Calculates and displays the sum of digits of a given number.
*   **Display factors of a number:** Displays all factors of a given number.
*   **Swap first and last digits:** Swaps the first and last digits of a given number and displays the result.
*   **Print cube of a number:** Displays the cube of each number from 1 up to a specified integer.

Example Output:
---------------

Here is an example of what the program looks like when running:

\=== Number Operations Menu ===
1. Add two integers
2. Find GCD of two numbers
3. Find LCM of two numbers
...
Enter your choice: 1
Enter first integer: 5
Enter second integer: 10
Sum = 15
Press Enter to continue...
    

Conclusion:
-----------

This program is a great way to practice basic C programming concepts, including functions, loops, and conditionals. You can use it to explore different number-related operations and perform various calculations.