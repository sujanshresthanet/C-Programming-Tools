#include <stdio.h>

void clearScreen() {
    // Clears the screen for better user experience
    printf("\033[H\033[J");
}

void checkOddEven() {
    int num;
    printf("\033[1;34mEnter a number: \033[0m");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("\033[1;32m%d is Even.\033[0m\n", num);
    } else {
        printf("\033[1;31m%d is Odd.\033[0m\n", num);
    }
}

void checkVowelConsonant() {
    char ch;
    printf("\033[1;34mEnter an alphabet: \033[0m");
    scanf(" %c", &ch); // Space before %c to avoid newline character issue
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("\033[1;32m%c is a Vowel.\033[0m\n", ch);
    } else {
        printf("\033[1;31m%c is a Consonant.\033[0m\n", ch);
    }
}

void checkLeapYear() {
    int year;
    printf("\033[1;34mEnter a year: \033[0m");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("\033[1;32m%d is a Leap Year.\033[0m\n", year);
    } else {
        printf("\033[1;31m%d is not a Leap Year.\033[0m\n", year);
    }
}

void generateMultiplicationTable() {
    int num;
    printf("\033[1;34mEnter a number to generate multiplication table: \033[0m");
    scanf("%d", &num);
    printf("\033[1;33mMultiplication Table of %d:\033[0m\n", num);
    for (int i = 1; i <= 10; i++) {
        printf("\033[1;36m%d x %d = %d\033[0m\n", num, i, num * i);
    }
}

void displayAlphabet() {
    printf("\033[1;33mDisplaying characters from 'A' to 'Z':\033[0m\n");
    for (char ch = 'A'; ch <= 'Z'; ch++) {
        printf("\033[1;36m%c \033[0m", ch);
    }
    printf("\n");
}

int main() {
    int choice;

    do {
        clearScreen();  // Clears the screen after each operation
        printf("\033[1;35m=== C Program Practice Menu ===\033[0m\n");
        printf("\033[1;34m1. Check if number is odd or even\n");
        printf("2. Check whether an alphabet is vowel or consonant\n");
        printf("3. Check leap year\n");
        printf("4. Generate multiplication table\n");
        printf("5. Display characters from 'A' to 'Z'\n");
        printf("6. Exit\033[0m\n");

        printf("\033[1;34mEnter your choice (1-6): \033[0m");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                checkOddEven();
                break;
            case 2:
                checkVowelConsonant();
                break;
            case 3:
                checkLeapYear();
                break;
            case 4:
                generateMultiplicationTable();
                break;
            case 5:
                displayAlphabet();
                break;
            case 6:
                printf("\033[1;31mExiting the program. Goodbye!\033[0m\n");
                break;
            default:
                printf("\033[1;31mInvalid choice! Please try again.\033[0m\n");
        }
        printf("\033[1;34mPress Enter to continue...\033[0m");
        getchar();  // To capture the newline character from the previous input
        getchar();  // Wait for Enter to continue
    } while (choice != 6);

    return 0;
}
