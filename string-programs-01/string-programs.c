#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to convert string from upper case to lower case
void convertToLower() {
    char str[100];
    printf("\033[1;34mEnter a string (Uppercase): \033[0m");
    scanf("%[^\n]s", str);
    getchar(); // To clear the newline character from input buffer
    
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }

    printf("\033[1;32mString in lowercase: \033[0m%s\n", str);
}

// Function to convert string from lower case to upper case
void convertToUpper() {
    char str[100];
    printf("\033[1;34mEnter a string (Lowercase): \033[0m");
    scanf("%[^\n]s", str);
    getchar(); // To clear the newline character from input buffer
    
    for (int i = 0; str[i]; i++) {
        str[i] = toupper(str[i]);
    }

    printf("\033[1;32mString in uppercase: \033[0m%s\n", str);
}

// Function to sort a set of strings in ascending order
void sortStrings() {
    int n;
    printf("\033[1;34mEnter the number of strings: \033[0m");
    scanf("%d", &n);
    getchar(); // To clear the newline character from input buffer

    char strings[n][100], temp[100];
    printf("\033[1;34mEnter the strings:\033[0m\n");
    for (int i = 0; i < n; i++) {
        printf("\033[1;34mString %d: \033[0m", i + 1);
        scanf("%[^\n]s", strings[i]);
        getchar(); // To clear the newline character
    }

    // Sorting strings in ascending alphabetical order
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(strings[i], strings[j]) > 0) {
                strcpy(temp, strings[i]);
                strcpy(strings[i], strings[j]);
                strcpy(strings[j], temp);
            }
        }
    }

    printf("\033[1;32mSorted strings:\033[0m\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", strings[i]);
    }
}

// Function to find the length of a string without using strlen()
int findLength(char *str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

// Function for string concatenation without using strcat
void stringConcatenation() {
    char str1[100], str2[100], result[200];
    printf("\033[1;34mEnter first string: \033[0m");
    scanf("%[^\n]s", str1);
    getchar(); // To clear the newline character from input buffer

    printf("\033[1;34mEnter second string: \033[0m");
    scanf("%[^\n]s", str2);

    // Concatenating the two strings manually
    int i = 0, j = 0;
    while (str1[i] != '\0') {
        result[i] = str1[i];
        i++;
    }
    while (str2[j] != '\0') {
        result[i] = str2[j];
        i++;
        j++;
    }
    result[i] = '\0';

    printf("\033[1;32mConcatenated string: \033[0m%s\n", result);
}

// Function to reverse a string using recursion
void reverseString(char str[], int start, int end) {
    if (start >= end) {
        return;
    }

    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    reverseString(str, start + 1, end - 1);
}

// Wrapper function for reverseString
void reverseStringWrapper() {
    char str[100];
    printf("\033[1;34mEnter a string to reverse: \033[0m");
    scanf("%[^\n]s", str);
    
    int len = findLength(str);
    reverseString(str, 0, len - 1);
    
    printf("\033[1;32mReversed string: \033[0m%s\n", str);
}

// Function to find frequency of characters in a string
void findFrequency() {
    char str[100];
    int freq[256] = {0};

    printf("\033[1;34mEnter a string: \033[0m");
    scanf("%[^\n]s", str);

    for (int i = 0; str[i]; i++) {
        freq[(int)str[i]]++;
    }

    printf("\033[1;32mCharacter frequencies:\033[0m\n");
    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("%c: %d\n", i, freq[i]);
        }
    }
}

// Function to search for a substring in a string
void searchSubstring() {
    char str[100], sub[50];
    printf("\033[1;34mEnter the main string: \033[0m");
    scanf("%[^\n]s", str);
    getchar(); // To clear the newline character

    printf("\033[1;34mEnter the substring to search: \033[0m");
    scanf("%[^\n]s", sub);

    if (strstr(str, sub)) {
        printf("\033[1;32mSubstring found!\033[0m\n");
    } else {
        printf("\033[1;31mSubstring not found.\033[0m\n");
    }
}

// Function to replace first occurrence of vowel with '-'
void replaceVowelWithDash() {
    char str[100];
    printf("\033[1;34mEnter a string: \033[0m");
    scanf("%[^\n]s", str);

    for (int i = 0; str[i]; i++) {
        if (strchr("aeiouAEIOU", str[i])) {
            str[i] = '-';
            break;
        }
    }

    printf("\033[1;32mString after replacement: \033[0m%s\n", str);
}

// Main function with menu for user to choose an option
int main() {
    int choice;
    while (1) {
        printf("\033[1;34m=== String Operations Menu ===\033[0m\n");
        printf("1. Convert string from upper case to lower case\n");
        printf("2. Convert string from lower case to upper case\n");
        printf("3. Sort a set of strings in ascending order\n");
        printf("4. Find length of a string without using strlen()\n");
        printf("5. String concatenation without using strcat\n");
        printf("6. Reverse a String using recursion\n");
        printf("7. Find frequency of characters in a string\n");
        printf("8. Search substring in a given string\n");
        printf("9. Replace first occurrence of vowel with ‘-’ in a string\n");
        printf("10. Exit\n");
        printf("\033[1;34mEnter your choice: \033[0m");
        scanf("%d", &choice);
        getchar(); // To clear the newline character from input buffer

        switch (choice) {
            case 1: convertToLower(); break;
            case 2: convertToUpper(); break;
            case 3: sortStrings(); break;
            case 4: {
                char str[100];
                printf("\033[1;34mEnter a string: \033[0m");
                scanf("%[^\n]s", str);
                printf("\033[1;32mLength of string: \033[0m%d\n", findLength(str));
                break;
            }
            case 5: stringConcatenation(); break;
            case 6: reverseStringWrapper(); break;
            case 7: findFrequency(); break;
            case 8: searchSubstring(); break;
            case 9: replaceVowelWithDash(); break;
            case 10: printf("\033[1;31mExiting program...\033[0m\n"); return 0;
            default: printf("\033[1;31mInvalid choice! Try again.\033[0m\n"); break;
        }

        printf("\033[1;34mPress Enter to continue...\033[0m");
        getchar(); // To pause the screen
    }
    return 0;
}
