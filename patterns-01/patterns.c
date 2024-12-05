#include <stdio.h>

// Pattern 1: Right angle triangle with numbers incrementing
void pattern1() {
    printf("Pattern 1:\n");
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    printf("\n");
}

// Pattern 2: Inverted right angle triangle with numbers
void pattern2() {
    printf("Pattern 2:\n");
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 6 - i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    printf("\n");
}

// Pattern 3: Right angle triangle with spaces on the right side
void pattern3() {
    printf("Pattern 3:\n");
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            if (j <= 6 - i) {
                printf("%d ", j);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n");
}

// Pattern 4: Right angle triangle with numbers in reverse order
void pattern4() {
    printf("Pattern 4:\n");
    for (int i = 1; i <= 5; i++) {
        for (int j = 5; j >= 1; j--) {
            if (j >= i) {
                printf("%d ", j);
            }
        }
        printf("\n");
    }
    printf("\n");
}

// Pattern 5: Right angle triangle of stars
void pattern5() {
    printf("Pattern 5:\n");
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
}

// Pattern 6: Inverted right angle triangle of stars
void pattern6() {
    printf("Pattern 6:\n");
    for (int i = 1; i <= 5; i++) {
        for (int j = 5; j >= i; j--) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
}

// Pattern 7: Right angle triangle of stars with spaces on the right side
void pattern7() {
    printf("Pattern 7:\n");
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            if (j <= i) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n");
}

// Pattern 8: Inverted right angle triangle of stars with spaces
void pattern8() {
    printf("Pattern 8:\n");
    for (int i = 1; i <= 5; i++) {
        for (int j = 5; j >= 1; j--) {
            if (j <= i) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n");
}

// Pattern 9: Right angle triangle of stars, filling the left side
void pattern9() {
    printf("Pattern 9:\n");
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            if (j >= i) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n");
}

// Pattern 10: Inverted right angle triangle with stars on the left
void pattern10() {
    printf("Pattern 10:\n");
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            if (j <= 6 - i) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n");
}

// Pattern 11: Right angle triangle with the same number repeated
void pattern11() {
    printf("Pattern 11:\n");
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
    printf("\n");
}

// Pattern 12: Right angle triangle of stars and spaces
void pattern12() {
    printf("Pattern 12:\n");
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        for (int j = i + 1; j <= 5; j++) {
            printf("  ");
        }
        printf("\n");
    }
    printf("\n");
}

// Pattern 13: Full star pyramid
void pattern13() {
    printf("Pattern 13:\n");
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5 - i; j++) {
            printf("  ");  // Print leading spaces
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("* ");  // Print stars
        }
        printf("\n");
    }
    printf("\n");
}

// Pattern 14: Inverted full star pyramid
void pattern14() {
    printf("Pattern 14:\n");
    for (int i = 5; i >= 1; i--) {
        for (int j = 1; j <= 5 - i; j++) {
            printf("  ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
}

// Pattern 15: Number pyramid (ascending order)
void pattern15() {
    printf("Pattern 15:\n");
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5 - i; j++) {
            printf("  ");
        }
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    printf("\n");
}

// Pattern 16: Inverted number pyramid
void pattern16() {
    printf("Pattern 16:\n");
    for (int i = 5; i >= 1; i--) {
        for (int j = 1; j <= 5 - i; j++) {
            printf("  ");
        }
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    printf("\n");
}

// Pattern 17: Hollow square with stars
void pattern17() {
    printf("Pattern 17:\n");
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            if (i == 1 || i == 5 || j == 1 || j == 5) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n");
}

// Pattern 18: Hollow pyramid with stars
void pattern18() {
    printf("Pattern 18:\n");
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5 - i; j++) {
            printf("  ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n");
}

// Pattern 19: Right-angle triangle of alternating stars and spaces
void pattern19() {
    printf("Pattern 19:\n");
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            if (j % 2 != 0) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n");
}

// Pattern 20: Alternating number and stars in a right angle triangle
void pattern20() {
    printf("Pattern 20:\n");
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            if (j % 2 != 0) {
                printf("%d ", j);  // Print number
            } else {
                printf("* ");  // Print star
            }
        }
        printf("\n");
    }
    printf("\n");
}

// Pattern 21: Increasing stars pattern
void pattern21() {
    printf("Pattern 21:\n");
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
}

// Pattern 22: Decreasing stars pattern
void pattern22() {
    printf("Pattern 22:\n");
    for (int i = 5; i >= 1; i--) {
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
}

// Pattern 23: Diamond pattern with stars
void pattern23() {
    printf("Pattern 23:\n");
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5 - i; j++) {
            printf("  ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = 4; i >= 1; i--) {
        for (int j = 1; j <= 5 - i; j++) {
            printf("  ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
}

// Pattern 24: Hollow diamond pattern with stars
void pattern24() {
    printf("Pattern 24:\n");
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5 - i; j++) {
            printf("  ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    for (int i = 4; i >= 1; i--) {
        for (int j = 1; j <= 5 - i; j++) {
            printf("  ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n");
}

// Pattern 25: Hourglass pattern with stars
void pattern25() {
    printf("Pattern 25:\n");
    for (int i = 5; i >= 1; i--) {
        for (int j = 1; j <= 5 - i; j++) {
            printf("  ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = 2; i <= 5; i++) {
        for (int j = 1; j <= 5 - i; j++) {
            printf("  ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
}

// Main function to call all pattern functions
int main() {
    pattern1();
    pattern2();
    pattern3();
    pattern4();
    pattern5();
    pattern6();
    pattern7();
    pattern8();
    pattern9();
    pattern10();
    pattern11();
    pattern12();
    pattern13();
    pattern14();
    pattern15();
    pattern16();
    pattern17();
    pattern18();
    pattern19();
    pattern20();
    pattern21();
    pattern22();
    pattern23();
    pattern24();
    pattern25();
    
    return 0;
}
