#include <stdio.h>
#include <stdlib.h>

// Function to sort array in ascending order
void sortArray() {
    int n;
    printf("\033[1;34mEnter the number of elements in the array: \033[0m");
    scanf("%d", &n);

    int arr[n];
    printf("\033[1;34mEnter the elements of the array: \033[0m");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sorting in ascending order
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("\033[1;32mSorted Array: \033[0m");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to find the largest element of an array
void findLargestElement() {
    int n;
    printf("\033[1;34mEnter the number of elements in the array: \033[0m");
    scanf("%d", &n);

    int arr[n];
    printf("\033[1;34mEnter the elements of the array: \033[0m");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    printf("\033[1;32mLargest element: \033[0m%d\n", largest);
}

// Function to find the sum of array elements
void findSumOfArray() {
    int n;
    printf("\033[1;34mEnter the number of elements in the array: \033[0m");
    scanf("%d", &n);

    int arr[n];
    printf("\033[1;34mEnter the elements of the array: \033[0m");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    printf("\033[1;32mSum of array elements: \033[0m%d\n", sum);
}

// Function to find the number of elements in an array
void findNumberOfElements() {
    int n;
    printf("\033[1;34mEnter the number of elements in the array: \033[0m");
    scanf("%d", &n);

    printf("\033[1;32mNumber of elements in the array: \033[0m%d\n", n);
}

// Function to calculate the average of array elements
void calculateAverage() {
    int n;
    printf("\033[1;34mEnter the number of elements in the array: \033[0m");
    scanf("%d", &n);

    int arr[n];
    printf("\033[1;34mEnter the elements of the array: \033[0m");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    float average = (float)sum / n;
    printf("\033[1;32mAverage of array elements: \033[0m%.2f\n", average);
}

// Function to implement Tic Tac Toe using 2D array
void ticTacToe() {
    char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
    int choice, row, col;
    char player = 'X';
    int turn = 0;

    printf("\033[1;34mTic Tac Toe Game!\n\033[0m");
    printf("Player 1: X\nPlayer 2: O\n");

    while (turn < 9) {
        printf("\033[1;34mPlayer %c, enter a number (1-9) to make a move: \033[0m", player);
        scanf("%d", &choice);

        row = (choice - 1) / 3;
        col = (choice - 1) % 3;

        if (choice < 1 || choice > 9 || board[row][col] == 'X' || board[row][col] == 'O') {
            printf("\033[1;31mInvalid move! Try again.\033[0m\n");
            continue;
        }

        board[row][col] = player;
        turn++;

        // Display the board
        printf("\033[1;32mCurrent Board:\n\033[0m");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                printf("%c ", board[i][j]);
            }
            printf("\n");
        }

        // Check if current player has won
        if ((board[0][0] == player && board[0][1] == player && board[0][2] == player) ||
            (board[1][0] == player && board[1][1] == player && board[1][2] == player) ||
            (board[2][0] == player && board[2][1] == player && board[2][2] == player) ||
            (board[0][0] == player && board[1][0] == player && board[2][0] == player) ||
            (board[0][1] == player && board[1][1] == player && board[2][1] == player) ||
            (board[0][2] == player && board[1][2] == player && board[2][2] == player) ||
            (board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
            (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
            printf("\033[1;32mPlayer %c wins!\033[0m\n", player);
            return;
        }

        // Switch player
        player = (player == 'X') ? 'O' : 'X';
    }

    printf("\033[1;31mIt's a draw!\033[0m\n");
}

// Function to swap first and last elements of an array
void swapFirstAndLast() {
    int n;
    printf("\033[1;34mEnter the number of elements in the array: \033[0m");
    scanf("%d", &n);

    int arr[n];
    printf("\033[1;34mEnter the elements of the array: \033[0m");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Swap first and last elements
    int temp = arr[0];
    arr[0] = arr[n - 1];
    arr[n - 1] = temp;

    printf("\033[1;32mArray after swapping first and last elements: \033[0m");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Main menu-driven program
int main() {
    int choice;
    while (1) {
        printf("\033[1;34m=== Array Operations Menu ===\033[0m\n");
        printf("1. Sort array in ascending order\n");
        printf("2. Find largest element of given array\n");
        printf("3. Find sum of array elements\n");
        printf("4. Find number of elements in an array\n");
        printf("5. Calculate average using array\n");
        printf("6. Tic Tac Toe using 2D Array\n");
        printf("7. Swap first and last elements of an array\n");
        printf("8. Exit\n");
        printf("\033[1;34mEnter your choice: \033[0m");
        scanf("%d", &choice);

        switch (choice) {
            case 1: sortArray(); break;
            case 2: findLargestElement(); break;
            case 3: findSumOfArray(); break;
            case 4: findNumberOfElements(); break;
            case 5: calculateAverage(); break;
            case 6: ticTacToe(); break;
            case 7: swapFirstAndLast(); break;
            case 8: printf("\033[1;31mExiting program...\033[0m\n"); return 0;
            default: printf("\033[1;31mInvalid choice! Try again.\033[0m\n"); break;
        }

        printf("\033[1;34mPress Enter to continue...\033[0m");
        getchar(); getchar(); // To wait for user input
    }

    return 0;
}
