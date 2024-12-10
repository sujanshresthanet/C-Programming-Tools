Temperature Converter in C
==========================

This project provides a simple command-line Temperature Converter program written in **C**. The user can convert temperatures between Celsius, Fahrenheit, and Kelvin. The program repeatedly asks if the user wants to perform another conversion after displaying the result.

Features
--------

*   Convert between Celsius, Fahrenheit, and Kelvin
*   Interactive user input for choosing conversion type
*   Loop to allow multiple conversions
*   Error handling for invalid inputs

Supported Conversions
---------------------

*   Celsius to Fahrenheit
*   Fahrenheit to Celsius
*   Celsius to Kelvin
*   Kelvin to Celsius
*   Fahrenheit to Kelvin
*   Kelvin to Fahrenheit

How to Compile and Run
----------------------

To compile and run the **temperature-converter.c** program, follow these steps:

1.  **Save the code to a file:** Save the code in a file called `temperature-converter.c`.
2.  **Open Terminal (or Command Prompt):** Navigate to the directory where the file is saved.
3.  **Compile the code:** Use the following command to compile the program:

    gcc temperature-converter.c -o temperature-converter

5.  **Run the compiled program:** After compiling, run the program with the following command:

    ./temperature-converter

7.  **Follow the on-screen instructions:** The program will prompt you to choose a conversion type, input a temperature value, and then display the result. After that, you will be asked if you want to perform another conversion.

Sample Output
-------------

Temperature Converter
1. Celsius to Fahrenheit
2. Fahrenheit to Celsius
3. Celsius to Kelvin
4. Kelvin to Celsius
5. Fahrenheit to Kelvin
6. Kelvin to Fahrenheit
Choose conversion option (1-6): 1
Enter the temperature value: 25
25.00 °C is 77.00 °F

Do you want to convert another temperature? (yes/no): yes

Temperature Converter
1. Celsius to Fahrenheit
2. Fahrenheit to Celsius
3. Celsius to Kelvin
4. Kelvin to Celsius
5. Fahrenheit to Kelvin
6. Kelvin to Fahrenheit
Choose conversion option (1-6): 2
Enter the temperature value: 77
77.00 °F is 25.00 °C

Do you want to convert another temperature? (yes/no): no
Thank you for using the Temperature Converter!

Program Logic
-------------

The program uses a **switch-case** statement to handle the different temperature conversion options. Each case corresponds to a different conversion, and the user inputs a temperature value that is processed by the corresponding conversion function. The result is displayed to the user, and they are asked if they wish to perform another conversion.

Contact
-------

If you have any questions or suggestions, feel free to reach out.