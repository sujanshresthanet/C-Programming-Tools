#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TASK_LENGTH 256
#define TODO_FILE "todo.txt"

// Function prototypes
void add_task();
void list_tasks();
void edit_task();
void delete_task();
void load_tasks_from_file();
void save_tasks_to_file();

typedef struct {
    char task[MAX_TASK_LENGTH];
} TodoItem;

TodoItem tasks[100];  // Array to store tasks
int task_count = 0;   // Count of tasks

// Main menu function
void menu() {
    int choice;

    do {
        printf("\n----- To-Do List Application -----\n");
        printf("1. Add New Task\n");
        printf("2. List All Tasks\n");
        printf("3. Edit Task\n");
        printf("4. Delete Task\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);
        getchar();  // Consume newline character left by scanf

        switch (choice) {
            case 1:
                add_task();
                break;
            case 2:
                list_tasks();
                break;
            case 3:
                edit_task();
                break;
            case 4:
                delete_task();
                break;
            case 5:
                printf("Exiting the program...\n");
                save_tasks_to_file();
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 5);
}

// Function to load tasks from file
void load_tasks_from_file() {
    FILE *file = fopen(TODO_FILE, "r");
    if (file == NULL) {
        printf("No previous tasks found, starting fresh.\n");
        return;
    }

    while (fgets(tasks[task_count].task, MAX_TASK_LENGTH, file)) {
        tasks[task_count].task[strcspn(tasks[task_count].task, "\n")] = '\0';  // Remove newline
        task_count++;
    }

    fclose(file);
}

// Function to save tasks to file
void save_tasks_to_file() {
    FILE *file = fopen(TODO_FILE, "w");
    if (file == NULL) {
        printf("Error saving tasks!\n");
        return;
    }

    for (int i = 0; i < task_count; i++) {
        fprintf(file, "%s\n", tasks[i].task);
    }

    fclose(file);
}

// Function to add a new task
void add_task() {
    if (task_count >= 100) {
        printf("Task list is full!\n");
        return;
    }

    printf("Enter your new task: ");
    fgets(tasks[task_count].task, MAX_TASK_LENGTH, stdin);
    tasks[task_count].task[strcspn(tasks[task_count].task, "\n")] = '\0';  // Remove newline
    task_count++;

    printf("Task added successfully!\n");
}

// Function to list all tasks
void list_tasks() {
    if (task_count == 0) {
        printf("No tasks to display.\n");
        return;
    }

    printf("\n----- To-Do List -----\n");
    for (int i = 0; i < task_count; i++) {
        printf("%d. %s\n", i + 1, tasks[i].task);
    }
}

// Function to edit an existing task
void edit_task() {
    int task_number;

    if (task_count == 0) {
        printf("No tasks to edit.\n");
        return;
    }

    printf("Enter task number to edit (1 to %d): ", task_count);
    scanf("%d", &task_number);
    getchar();  // Consume newline character

    if (task_number < 1 || task_number > task_count) {
        printf("Invalid task number!\n");
        return;
    }

    printf("Enter the new task content: ");
    fgets(tasks[task_number - 1].task, MAX_TASK_LENGTH, stdin);
    tasks[task_number - 1].task[strcspn(tasks[task_number - 1].task, "\n")] = '\0';  // Remove newline

    printf("Task updated successfully!\n");
}

// Function to delete an existing task
void delete_task() {
    int task_number;

    if (task_count == 0) {
        printf("No tasks to delete.\n");
        return;
    }

    printf("Enter task number to delete (1 to %d): ", task_count);
    scanf("%d", &task_number);
    getchar();  // Consume newline character

    if (task_number < 1 || task_number > task_count) {
        printf("Invalid task number!\n");
        return;
    }

    // Shift tasks to fill the gap
    for (int i = task_number - 1; i < task_count - 1; i++) {
        strcpy(tasks[i].task, tasks[i + 1].task);
    }

    task_count--;  // Decrease the task count
    printf("Task deleted successfully!\n");
}

int main() {
    load_tasks_from_file();  // Load tasks from file on startup
    menu();  // Show menu to the user
    return 0;
}
