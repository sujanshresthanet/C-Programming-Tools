#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float celsius_to_fahrenheit(float celsius) {
    return (celsius * 9/5) + 32;
}

float fahrenheit_to_celsius(float fahrenheit) {
    return (fahrenheit - 32) * 5/9;
}

float celsius_to_kelvin(float celsius) {
    return celsius + 273.15;
}

float kelvin_to_celsius(float kelvin) {
    return kelvin - 273.15;
}

float fahrenheit_to_kelvin(float fahrenheit) {
    return (fahrenheit - 32) * 5/9 + 273.15;
}

float kelvin_to_fahrenheit(float kelvin) {
    return (kelvin - 273.15) * 9/5 + 32;
}

int main() {
    int choice;
    float value, result;
    char again[4];

    do {
        printf("\nTemperature Converter\n");
        printf("1. Celsius to Fahrenheit\n");
        printf("2. Fahrenheit to Celsius\n");
        printf("3. Celsius to Kelvin\n");
        printf("4. Kelvin to Celsius\n");
        printf("5. Fahrenheit to Kelvin\n");
        printf("6. Kelvin to Fahrenheit\n");

        printf("Choose conversion option (1-6): ");
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input! Please enter a valid number.\n");
            // Consume invalid input
            while(getchar() != '\n');
            continue;
        }

        if (choice < 1 || choice > 6) {
            printf("Invalid choice. Please select a valid option.\n");
            continue;
        }

        printf("Enter the temperature value: ");
        if (scanf("%f", &value) != 1) {
            printf("Invalid input! Please enter a valid temperature value.\n");
            // Consume invalid input
            while(getchar() != '\n');
            continue;
        }

        switch (choice) {
            case 1:
                result = celsius_to_fahrenheit(value);
                printf("%.2f °C is %.2f °F\n", value, result);
                break;
            case 2:
                result = fahrenheit_to_celsius(value);
                printf("%.2f °F is %.2f °C\n", value, result);
                break;
            case 3:
                result = celsius_to_kelvin(value);
                printf("%.2f °C is %.2f K\n", value, result);
                break;
            case 4:
                result = kelvin_to_celsius(value);
                printf("%.2f K is %.2f °C\n", value, result);
                break;
            case 5:
                result = fahrenheit_to_kelvin(value);
                printf("%.2f °F is %.2f K\n", value, result);
                break;
            case 6:
                result = kelvin_to_fahrenheit(value);
                printf("%.2f K is %.2f °F\n", value, result);
                break;
            default:
                printf("Invalid choice!\n");
                continue;
        }

        printf("\nDo you want to convert another temperature? (yes/no): ");
        scanf("%s", again);
    } while (strcmp(again, "yes") == 0 || strcmp(again, "y") == 0);

    printf("Thank you for using the Temperature Converter!\n");

    return 0;
}
