#include <stdio.h>
#include <math.h>

// Define colors for output
#define RESET   "\x1b[0m"
#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE    "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN    "\x1b[36m"

// Function to print "Hello, World!"
void helloWorld() {
    printf(GREEN "Hello, World!\n" RESET);
}

// Function to check if a number is positive or negative
void checkPositiveNegative() {
    int num;
    printf(YELLOW "Enter a number: " RESET);
    scanf("%d", &num);
    if (num > 0) {
        printf(GREEN "The number is positive.\n" RESET);
    } else if (num < 0) {
        printf(RED "The number is negative.\n" RESET);
    } else {
        printf(BLUE "The number is zero.\n" RESET);
    }
}

// Function to reverse a number using recursion
int reverseNumber(int num) {
    static int reversed = 0;
    if (num != 0) {
        reversed = reversed * 10 + num % 10;
        reverseNumber(num / 10);
    }
    return reversed;
}

// Function to find the greatest of three numbers
void greatestOfThree() {
    int a, b, c;
    printf(YELLOW "Enter three numbers: " RESET);
    scanf("%d %d %d", &a, &b, &c);
    if (a >= b && a >= c) {
        printf(GREEN "The greatest number is: %d\n" RESET, a);
    } else if (b >= a && b >= c) {
        printf(GREEN "The greatest number is: %d\n" RESET, b);
    } else {
        printf(GREEN "The greatest number is: %d\n" RESET, c);
    }
}

// Function to print Fibonacci series up to n terms
void fibonacciSeries() {
    int n;
    printf(YELLOW "Enter the range (number of terms): " RESET);
    scanf("%d", &n);
    int a = 0, b = 1, next;
    printf(CYAN "Fibonacci Series: " RESET);
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}

// Function to find factorial of a given number
void factorial() {
    int num;
    printf(YELLOW "Enter a number: " RESET);
    scanf("%d", &num);
    long long fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    printf(CYAN "Factorial of %d is %lld\n" RESET, num, fact);
}

// Function to find prime numbers in a given range
void primeNumbers() {
    int start, end;
    printf(YELLOW "Enter the range (start and end): " RESET);
    scanf("%d %d", &start, &end);
    printf(CYAN "Prime numbers between %d and %d are: " RESET, start, end);
    for (int num = start; num <= end; num++) {
        int isPrime = 1;
        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime && num > 1) {
            printf("%d ", num);
        }
    }
    printf("\n");
}

// Function to check if a number is Armstrong or not
void armstrongNumber() {
    int num, sum = 0, temp, remainder, n = 0;
    printf(YELLOW "Enter a number: " RESET);
    scanf("%d", &num);
    temp = num;
    while (temp != 0) {
        temp /= 10;
        ++n;
    }
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, n);
        temp /= 10;
    }
    if (sum == num) {
        printf(GREEN "%d is an Armstrong number.\n" RESET, num);
    } else {
        printf(RED "%d is not an Armstrong number.\n" RESET, num);
    }
}

// Function to check if a number is palindrome
void palindromeNumber() {
    int num, reversed = 0, remainder, original;
    printf(YELLOW "Enter a number: " RESET);
    scanf("%d", &num);
    original = num;
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    if (original == reversed) {
        printf(GREEN "%d is a palindrome number.\n" RESET, original);
    } else {
        printf(RED "%d is not a palindrome number.\n" RESET, original);
    }
}

// Function to display palindrome numbers in a range
void palindromeRange() {
    int start, end;
    printf(YELLOW "Enter the range (start and end): " RESET);
    scanf("%d %d", &start, &end);
    printf(CYAN "Palindrome numbers between %d and %d are: " RESET, start, end);
    for (int num = start; num <= end; num++) {
        int original = num, reversed = 0, remainder;
        while (num != 0) {
            remainder = num % 10;
            reversed = reversed * 10 + remainder;
            num /= 10;
        }
        if (original == reversed) {
            printf("%d ", original);
        }
        num = original;
    }
    printf("\n");
}

// Function to find ASCII value of a character
void asciiValue() {
    char ch;
    printf(YELLOW "Enter a character: " RESET);
    scanf(" %c", &ch);  // space before %c to consume any extra newline
    printf(CYAN "ASCII value of %c is %d\n" RESET, ch, ch);
}

// Function to find the size of int, float, double and char
void sizeOfDataTypes() {
    printf(CYAN "Size of int: %lu bytes\n" RESET, sizeof(int));
    printf(CYAN "Size of float: %lu bytes\n" RESET, sizeof(float));
    printf(CYAN "Size of double: %lu bytes\n" RESET, sizeof(double));
    printf(CYAN "Size of char: %lu bytes\n" RESET, sizeof(char));
}

// Function to find the sum of first n natural numbers
void sumOfNaturalNumbers() {
    int n;
    printf(YELLOW "Enter a number: " RESET);
    scanf("%d", &n);
    int sum = n * (n + 1) / 2;
    printf(CYAN "Sum of first %d natural numbers is: %d\n" RESET, n, sum);
}

// Function to print the integer entered by user
void printInteger() {
    int num;
    printf(YELLOW "Enter an integer: " RESET);
    scanf("%d", &num);
    printf(CYAN "You entered: %d\n" RESET, num);
}

int main() {
    int choice;
    while (1) {
        printf(MAGENTA "\nMenu:\n" RESET);
        printf(MAGENTA "1. Hello World Program\n" RESET);
        printf(MAGENTA "2. Check whether the number is positive or negative\n" RESET);
        printf(MAGENTA "3. Reverse an input number using recursion\n" RESET);
        printf(MAGENTA "4. Find greatest of three numbers\n" RESET);
        printf(MAGENTA "5. Print Fibonacci series in a given range\n" RESET);
        printf(MAGENTA "6. Find factorial of a given number\n" RESET);
        printf(MAGENTA "7. Find prime numbers in a given range\n" RESET);
        printf(MAGENTA "8. Check if the number is Armstrong or not\n" RESET);
        printf(MAGENTA "9. Check if the number is palindrome or not\n" RESET);
        printf(MAGENTA "10. Display palindrome numbers in a given range\n" RESET);
        printf(MAGENTA "11. Find ASCII value of a character\n" RESET);
        printf(MAGENTA "12. Find size of int, float, double and char\n" RESET);
        printf(MAGENTA "13. Find sum of first n natural numbers\n" RESET);
        printf(MAGENTA "14. Print the integer entered by user\n" RESET);
        printf(MAGENTA "15. Exit\n" RESET);
        printf(YELLOW "Enter your choice: " RESET);
        scanf("%d", &choice);

        switch (choice) {
            case 1: helloWorld(); break;
            case 2: checkPositiveNegative(); break;
            case 3: {
                int num;
                printf(YELLOW "Enter a number: " RESET);
                scanf("%d", &num);
                printf(CYAN "Reversed number: %d\n" RESET, reverseNumber(num));
                break;
            }
            case 4: greatestOfThree(); break;
            case 5: fibonacciSeries(); break;
            case 6: factorial(); break;
            case 7: primeNumbers(); break;
            case 8: armstrongNumber(); break;
            case 9: palindromeNumber(); break;
            case 10: palindromeRange(); break;
            case 11: asciiValue(); break;
            case 12: sizeOfDataTypes(); break;
            case 13: sumOfNaturalNumbers(); break;
            case 14: printInteger(); break;
            case 15: printf(RED "Exiting...\n" RESET); return 0;
            default: printf(RED "Invalid choice, please try again.\n" RESET); break;
        }
    }
    return 0;
}
