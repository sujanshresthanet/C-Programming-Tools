#include <stdio.h>
#include <math.h>

// Function to clear the screen (optional for a better UI experience)
void clearScreen() {
    printf("\033[H\033[J");
}

// Function to add two integers
void addTwoIntegers() {
    int a, b;
    printf("\033[1;34mEnter first integer: \033[0m");
    scanf("%d", &a);
    printf("\033[1;34mEnter second integer: \033[0m");
    scanf("%d", &b);
    printf("\033[1;32mSum = %d\033[0m\n", a + b);
}

// Function to find GCD of two numbers (returns the GCD)
int findGCD(int a, int b) {
    int gcd;
    // Using Euclidean algorithm to find GCD
    for (int i = 1; i <= a && i <= b; ++i) {
        if (a % i == 0 && b % i == 0)
            gcd = i;
    }
    return gcd;
}

// Function to find LCM of two numbers
void findLCM() {
    int a, b, lcm;
    printf("\033[1;34mEnter first number: \033[0m");
    scanf("%d", &a);
    printf("\033[1;34mEnter second number: \033[0m");
    scanf("%d", &b);
    
    // Calculate LCM using the formula: LCM(a, b) = (a * b) / GCD(a, b)
    lcm = (a * b) / findGCD(a, b);
    printf("\033[1;32mLCM = %d\033[0m\n", lcm);
}

// Function to check if a number is prime
void checkPrime() {
    int num, isPrime = 1;
    printf("\033[1;34mEnter a number: \033[0m");
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = 0;
    } else {
        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime) {
        printf("\033[1;32m%d is a Prime Number.\033[0m\n", num);
    } else {
        printf("\033[1;31m%d is not a Prime Number.\033[0m\n", num);
    }
}

// Function to count number of digits in an integer
void countDigits() {
    int num, count = 0;
    printf("\033[1;34mEnter a number: \033[0m");
    scanf("%d", &num);

    while (num != 0) {
        num /= 10;
        ++count;
    }

    printf("\033[1;32mNumber of digits = %d\033[0m\n", count);
}

// Function to calculate the power of a number
void calculatePower() {
    int base, exponent;
    printf("\033[1;34mEnter the base: \033[0m");
    scanf("%d", &base);
    printf("\033[1;34mEnter the exponent: \033[0m");
    scanf("%d", &exponent);

    long long result = pow(base, exponent);
    printf("\033[1;32m%d ^ %d = %lld\033[0m\n", base, exponent, result);
}

// Function to print prime numbers from 1 to N
void printPrimeNumbers() {
    int N;
    printf("\033[1;34mEnter a number N to print prime numbers from 1 to N: \033[0m");
    scanf("%d", &N);

    printf("\033[1;33mPrime numbers from 1 to %d:\033[0m\n", N);
    for (int num = 2; num <= N; num++) {
        int isPrime = 1;
        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            printf("\033[1;36m%d \033[0m", num);
        }
    }
    printf("\n");
}

// Function to display Armstrong numbers between two intervals
void armstrongNumbers() {
    int start, end;
    printf("\033[1;34mEnter the start of the interval: \033[0m");
    scanf("%d", &start);
    printf("\033[1;34mEnter the end of the interval: \033[0m");
    scanf("%d", &end);

    printf("\033[1;33mArmstrong numbers between %d and %d:\033[0m\n", start, end);
    for (int num = start; num <= end; num++) {
        int sum = 0, temp = num, remainder, digits = 0;

        // Find number of digits
        while (temp != 0) {
            temp /= 10;
            ++digits;
        }

        temp = num;
        // Calculate the sum of the powers of its digits
        while (temp != 0) {
            remainder = temp % 10;
            sum += pow(remainder, digits);
            temp /= 10;
        }

        if (sum == num) {
            printf("\033[1;36m%d \033[0m", num);
        }
    }
    printf("\n");
}

// Function to check if number is divisible by 3 and 5
void divisibleBy3And5() {
    int num;
    printf("\033[1;34mEnter a number: \033[0m");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 5 == 0) {
        printf("\033[1;32m%d is divisible by 3 and 5.\033[0m\n", num);
    } else {
        printf("\033[1;31m%d is not divisible by 3 and 5.\033[0m\n", num);
    }
}

// Function to print numbers divisible by 3 and 5 from 1 to 100
void printDivisibleBy3And5() {
    printf("\033[1;33mNumbers divisible by 3 and 5 from 1 to 100:\033[0m\n");
    for (int num = 1; num <= 100; num++) {
        if (num % 3 == 0 && num % 5 == 0) {
            printf("\033[1;36m%d \033[0m", num);
        }
    }
    printf("\n");
}

// Function to check a number is abundant
void checkAbundant() {
    int num, sum = 0;
    printf("\033[1;34mEnter a number: \033[0m");
    scanf("%d", &num);

    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    if (sum > num) {
        printf("\033[1;32m%d is an Abundant Number.\033[0m\n", num);
    } else {
        printf("\033[1;31m%d is not an Abundant Number.\033[0m\n", num);
    }
}

// Function to find sum of digits of a number
void sumOfDigits() {
    int num, sum = 0;
    printf("\033[1;34mEnter a number: \033[0m");
    scanf("%d", &num);

    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }

    printf("\033[1;32mSum of digits = %d\033[0m\n", sum);
}

// Function to display factors of a number
void displayFactors() {
    int num;
    printf("\033[1;34mEnter a number: \033[0m");
    scanf("%d", &num);

    printf("\033[1;33mFactors of %d:\033[0m\n", num);
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("\033[1;36m%d \033[0m", i);
        }
    }
    printf("\n");
}

// Function to swap first and last digits of a number
void swapFirstAndLast() {
    int num, firstDigit, lastDigit, digits = 0, swappedNum;
    printf("\033[1;34mEnter a number: \033[0m");
    scanf("%d", &num);

    lastDigit = num % 10;

    while (num != 0) {
        firstDigit = num;
        num /= 10;
        digits++;
    }

    swappedNum = lastDigit * pow(10, digits - 1) + firstDigit * (pow(10, digits - 1) - 1);
    printf("\033[1;32mNumber after swapping first and last digits = %d\033[0m\n", swappedNum);
}

// Function to print cube of a number up to an integer
void printCube() {
    int num;
    printf("\033[1;34mEnter a number: \033[0m");
    scanf("%d", &num);

    printf("\033[1;33mCubes of numbers from 1 to %d:\033[0m\n", num);
    for (int i = 1; i <= num; i++) {
        printf("\033[1;36m%d^3 = %d\033[0m\n", i, i * i * i);
    }
}

// Main function with menu for user to choose an option
int main() {
    int choice;
    while (1) {
        clearScreen();
        printf("\033[1;34m=== Number Operations Menu ===\033[0m\n");
        printf("1. Add two integers\n");
        printf("2. Find GCD of two numbers\n");
        printf("3. Find LCM of two numbers\n");
        printf("4. Check if number is prime\n");
        printf("5. Count number of digits in an integer\n");
        printf("6. Calculate the power of a number\n");
        printf("7. Print prime numbers from 1 to N\n");
        printf("8. Display Armstrong numbers between two intervals\n");
        printf("9. Check if a number is divisible by 3 and 5\n");
        printf("10. Print numbers divisible by 3 and 5 from 1 to 100\n");
        printf("11. Check abundant number\n");
        printf("12. Find sum of digits of a number\n");
        printf("13. Display factors of a number\n");
        printf("14. Swap first and last digits of a number\n");
        printf("15. Print cube of a number up to an integer\n");
        printf("16. Exit\n");
        printf("\033[1;34mEnter your choice: \033[0m");
        scanf("%d", &choice);

        int num1, num2;
        switch (choice) {
            case 1: addTwoIntegers(); break;
            case 2: 
                printf("\033[1;34mEnter first number: \033[0m");
                scanf("%d", &num1);
                printf("\033[1;34mEnter second number: \033[0m");
                scanf("%d", &num2);
                printf("\033[1;32mGCD = %d\033[0m\n", findGCD(num1, num2));
                break;
            case 3: findLCM(); break;
            case 4: checkPrime(); break;
            case 5: countDigits(); break;
            case 6: calculatePower(); break;
            case 7: printPrimeNumbers(); break;
            case 8: armstrongNumbers(); break;
            case 9: divisibleBy3And5(); break;
            case 10: printDivisibleBy3And5(); break;
            case 11: checkAbundant(); break;
            case 12: sumOfDigits(); break;
            case 13: displayFactors(); break;
            case 14: swapFirstAndLast(); break;
            case 15: printCube(); break;
            case 16: printf("\033[1;31mExiting program...\033[0m\n"); return 0;
            default: printf("\033[1;31mInvalid choice! Try again.\033[0m\n"); break;
        }
        printf("\033[1;34mPress Enter to continue...\033[0m");
        getchar(); getchar(); // To pause the screen
    }
    return 0;
}
