#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 3

// Function prototypes
void printBoard(char board[SIZE][SIZE]);
int checkWin(char board[SIZE][SIZE]);
int isBoardFull(char board[SIZE][SIZE]);
void playerMove(char board[SIZE][SIZE]);
void computerMove(char board[SIZE][SIZE]);

int main() {
    char board[SIZE][SIZE] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
    int gameStatus = 0; // 0: ongoing, 1: player wins, -1: computer wins, 2: draw

    srand(time(0)); // Seed for random number generation

    printf("Welcome to Tic-Tac-Toe!\n");

    // Main game loop
    while (gameStatus == 0) {
        printBoard(board);
        
        playerMove(board);
        gameStatus = checkWin(board);
        if (gameStatus != 0) break;
        if (isBoardFull(board)) break;
        
        computerMove(board);
        gameStatus = checkWin(board);
        if (gameStatus != 0) break;
        if (isBoardFull(board)) break;
    }

    printBoard(board);

    // Output the result of the game
    if (gameStatus == 1) {
        printf("Congratulations! You win.\n");
    } else if (gameStatus == -1) {
        printf("Computer wins! Better luck next time.\n");
    } else if (gameStatus == 2) {
        printf("It's a draw!\n");
    }

    return 0;
}

// Function to print the Tic-Tac-Toe board
void printBoard(char board[SIZE][SIZE]) {
    printf("\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf(" %c ", board[i][j]);
            if (j < SIZE - 1) printf("|");
        }
        printf("\n");
        if (i < SIZE - 1) {
            printf("---|---|---\n");
        }
    }
    printf("\n");
}

// Function to check if there's a winner or if the game is a draw
int checkWin(char board[SIZE][SIZE]) {
    // Check rows, columns, and diagonals for a win
    for (int i = 0; i < SIZE; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
            return (board[i][0] == 'X') ? 1 : -1;
        }
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) {
            return (board[0][i] == 'X') ? 1 : -1;
        }
    }

    // Check diagonals
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
        return (board[0][0] == 'X') ? 1 : -1;
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
        return (board[0][2] == 'X') ? 1 : -1;
    }

    // Check for a draw (if the board is full)
    if (isBoardFull(board)) {
        return 2; // Draw
    }

    return 0; // No winner yet
}

// Function to check if the board is full
int isBoardFull(char board[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (board[i][j] != 'X' && board[i][j] != 'O') {
                return 0; // Board is not full
            }
        }
    }
    return 1; // Board is full
}

// Function to handle player's move
void playerMove(char board[SIZE][SIZE]) {
    int move;
    printf("Your turn! Choose a position (1-9): ");
    scanf("%d", &move);

    // Check if the move is valid
    while (move < 1 || move > 9 || board[(move-1) / SIZE][(move-1) % SIZE] == 'X' || board[(move-1) / SIZE][(move-1) % SIZE] == 'O') {
        printf("Invalid move! Try again: ");
        scanf("%d", &move);
    }

    // Update the board
    board[(move-1) / SIZE][(move-1) % SIZE] = 'X';
}

// Function to handle computer's move
void computerMove(char board[SIZE][SIZE]) {
    int move;
    printf("Computer's turn...\n");

    // Randomly select an empty spot
    do {
        move = rand() % 9 + 1;
    } while (board[(move-1) / SIZE][(move-1) % SIZE] == 'X' || board[(move-1) / SIZE][(move-1) % SIZE] == 'O');

    // Update the board
    board[(move-1) / SIZE][(move-1) % SIZE] = 'O';
}
