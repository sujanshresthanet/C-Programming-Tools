#include <stdio.h>
#include <ctype.h>  // For toupper() function

#define NUM_QUESTIONS 15

// Structure for a question
struct Question {
    char question[256];
    char options[4][100];  // 4 options for each question
    char correctAnswer;    // correct answer (A, B, C, or D)
};

// Function to display the quiz and get user input
void displayQuestion(struct Question q, int qNumber) {
    printf("\nQuestion %d: %s\n", qNumber + 1, q.question);
    for (int i = 0; i < 4; i++) {
        printf("%c. %s\n", 'A' + i, q.options[i]);
    }
    printf("Enter your answer (A, B, C, or D): ");
}

// Main function
int main() {
    struct Question quiz[NUM_QUESTIONS] = {
        {"What is the size of int in C?", 
         {"2 bytes", "4 bytes", "8 bytes", "1 byte"}, 'B'},
        {"Which function is used to print in C?", 
         {"printf()", "scanf()", "getchar()", "puts()"}, 'A'},
        {"What is the correct syntax for a for loop?", 
         {"for(i=0; i<10; i++)", "for(i<10; i++)", "for(i=0; i<10)", "loop(i=0; i<10)"}, 'A'},
        {"Which of the following is a C keyword?", 
         {"print", "display", "printf", "return"}, 'D'},
        {"How do you declare a pointer in C?", 
         {"pointer p", "p*","int *p", "int p*"}, 'C'},
        {"Which of these is an example of a correct function prototype?", 
         {"int func();", "function int();", "func() int;", "int func(){}"}, 'A'},
        {"What is the output of printf(\"%d\", 5 > 3);", 
         {"0","1",  "5", "3"}, 'B'},
        {"Which operator is used for bitwise AND?", 
         {"&", "|", "^", "~"}, 'A'},
        {"What is the correct way to declare an array of 10 integers?", 
         {"int arr[10];", "int arr(10);", "array int[10];", "int[10] arr;"}, 'A'},
        {"What is the default value of a static variable?", 
         {"1", "undefined", "garbage value","0"}, 'D'},
        {"What is the purpose of the `break` statement in C?", 
         {"Exit a loop", "Skip to the next iteration", "Terminate the program", "End the function"}, 'A'},
        {"Which function is used to allocate memory dynamically in C?", 
         {"malloc()", "alloc()", "calloc()", "new()"}, 'A'},
        {"What is the size of a `char` in C?", 
         {"2 bytes", "4 bytes","1 byte", "8 bytes"}, 'C'},
        {"Which of these operators is used for logical AND?", 
         {"&&", "&", "|", "||"}, 'A'},
        {"How do you access the value of a pointer?", 
         {"p*","*p",  "p->", "&p"}, 'B'}
    };
    
    int score = 0;
    char userAnswer;
    
    // Game loop
    for (int i = 0; i < NUM_QUESTIONS; i++) {
        displayQuestion(quiz[i], i);  // Display the current question and options
        scanf(" %c", &userAnswer);   // Get user input (the space before %c handles newline character)

        // Normalize the input to uppercase
        userAnswer = toupper(userAnswer);  // Convert to uppercase

        // Check the user's answer and give feedback
        if (userAnswer == quiz[i].correctAnswer) {
            printf("Correct!\n");
            score++;
        } else {
            printf("Wrong! The correct answer was %c.\n", quiz[i].correctAnswer);
        }
    }

    // Final score
    printf("\nQuiz finished! Your score is: %d out of %d\n", score, NUM_QUESTIONS);
    
    // Provide feedback based on score
    if (score == NUM_QUESTIONS) {
        printf("Excellent! Perfect score!\n");
    } else if (score >= NUM_QUESTIONS / 2) {
        printf("Good job! You passed the quiz.\n");
    } else {
        printf("Better luck next time!\n");
    }

    return 0;
}
