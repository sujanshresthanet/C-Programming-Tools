#include <stdio.h>

void add(float num1, float num2) {
    printf("Result: %.2f\n", num1 + num2);
}

void subtract(float num1, float num2) {
    printf("Result: %.2f\n", num1 - num2);
}

void multiply(float num1, float num2) {
    printf("Result: %.2f\n", num1 * num2);
}

void divide(float num1, float num2) {
    if (num2 != 0) {
        printf("Result: %.2f\n", num1 / num2);
    } else {
        printf("Error: Division by zero!\n");
    }
}

int main() {
    int choice;
    float num1, num2;

    while (1) {
        // Display menu
        printf("\nSimple Calculator\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        // Exit the program if the user selects 5
        if (choice == 5) {
            printf("Exiting the calculator. Goodbye!\n");
            break;
        }

        // Get the input numbers from the user
        printf("Enter first number: ");
        scanf("%f", &num1);
        printf("Enter second number: ");
        scanf("%f", &num2);

        // Perform the chosen operation
        switch (choice) {
            case 1:
                add(num1, num2);
                break;
            case 2:
                subtract(num1, num2);
                break;
            case 3:
                multiply(num1, num2);
                break;
            case 4:
                divide(num1, num2);
                break;
            default:
                printf("Invalid choice! Please select a valid option.\n");
        }
    }
    return 0;
}
