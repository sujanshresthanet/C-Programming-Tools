String Programs in C
====================

This C program provides a variety of string-related operations. The user can choose from a list of options to perform string manipulations such as converting case, reversing a string, sorting strings, counting character frequencies, and more.

List of Operations
------------------

*   Convert string from upper case to lower case
*   Convert string from lower case to upper case
*   Sort a set of strings in ascending alphabetical order
*   Find length of a string without using `strlen()`
*   String concatenation without using `strcat()`
*   Reverse a string using recursion
*   Find frequency of characters in a string
*   Search for a substring in a given string
*   Replace first occurrence of a vowel with `-` in a string
*   Exit the program

How to Run the Code:
--------------------

To compile and run the program, follow the steps below:

1.  **Step 1:** Save the code in a file named `string-programs.c`.
2.  **Step 2:** Open a terminal (or command prompt) in the directory where the file is saved.
3.  **Step 3:** Compile the program using the GCC compiler by running the following command:
    
    gcc string-programs.c -o string-programs
    
4.  **Step 4:** Run the program by typing the following command:
    
    ./string-programs
    

Menu Options:
-------------

Once the program is running, the user will be presented with a menu to choose an operation. The menu will appear as follows:

\=== String Operations Menu ===
1. Convert string from upper case to lower case
2. Convert string from lower case to upper case
3. Sort a set of strings in ascending order
4. Find length of a string without using strlen()
5. String concatenation without using strcat
6. Reverse a String using recursion
7. Find frequency of characters in a string
8. Search substring in a given string
9. Replace first occurrence of vowel with ‘-’ in a string
10. Exit
Enter your choice:
    

Explanation of Functions:
-------------------------

*   **Convert string from upper case to lower case:** Converts all uppercase characters in the string to lowercase.
*   **Convert string from lower case to upper case:** Converts all lowercase characters in the string to uppercase.
*   **Sort strings in ascending order:** Sorts a list of strings in alphabetical order.
*   **Find length of a string without using `strlen()`:** Calculates the length of a string manually by iterating through its characters.
*   **String concatenation without using `strcat()`:** Concatenates two strings manually without using the standard `strcat()` function.
*   **Reverse a string using recursion:** Reverses a string using a recursive function.
*   **Find frequency of characters in a string:** Counts how many times each character appears in the string.
*   **Search for a substring in a string:** Checks if a given substring exists within the string.
*   **Replace first occurrence of vowel with `-`:** Replaces the first vowel found in the string with a hyphen (-).

Sample Output:
--------------

Here is an example of the program's output when running the string operations:

\=== String Operations Menu ===
1. Convert string from upper case to lower case
2. Convert string from lower case to upper case
3. Sort a set of strings in ascending order
...
Enter your choice: 1
Enter a string (Uppercase): HELLO WORLD
String in lowercase: hello world
Press Enter to continue...
    

Conclusion:
-----------

This program is an excellent way to practice basic string operations in C, including string manipulation, recursion, and manual operations like concatenation and length calculation. You can explore and experiment with different string operations, improve your skills, and understand how strings work in C programming.