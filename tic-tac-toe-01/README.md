Tic-Tac-Toe Game in C
=====================

Description
-----------

This is a simple 2-player Tic-Tac-Toe game implemented in C, where one player can play against the computer. The game uses a 3x3 grid, where the player takes turns with the computer to place either 'X' or 'O' on the board. The game ends when either player wins, or the board is full, resulting in a draw.

Features
--------

*   Player vs Computer gameplay.
*   Randomized computer moves.
*   Detection of win conditions (horizontal, vertical, and diagonal).
*   Draw detection when the board is full.

How to Run
----------

### Prerequisites

You need a C compiler (e.g., GCC) to compile and run the game.

### Steps

1.  **Clone or Download the Code:** Download the source code file or clone this repository.
2.  **Compile the Code:** Open a terminal and navigate to the directory containing the `tictactoe.c` file. Then, compile the program using the following command:
    
        gcc tictactoe.c -o tictactoe
    
3.  **Run the Game:** After compilation, run the program using the following command:
    
        ./tictactoe
    
4.  **Play the Game:**
    *   The board will display the positions as numbers (1-9) initially.
    *   The player is prompted to select a number to place their 'X'.
    *   The computer will automatically choose a random position for its 'O'.
    *   The game continues until there is a winner or the board is full (draw).

Example
-------

            Welcome to Tic-Tac-Toe!

            1 | 2 | 3
           ---|---|---
            4 | 5 | 6
           ---|---|---
            7 | 8 | 9

            Your turn! Choose a position (1-9): 5

            1 | 2 | 3
           ---|---|---
            4 | X | 6
           ---|---|---
            7 | 8 | 9

            Computer's turn...

            1 | 2 | 3
           ---|---|---
            4 | X | O
           ---|---|---
            7 | 8 | 9

            Your turn! Choose a position (1-9): 1
        

Sample Output
-------------

Congratulations! You win.

License
-------

This project is open-source and available under the MIT License.

Notes
-----

The computer makes random moves. In future versions, you could implement a more intelligent AI (e.g., minimax algorithm).