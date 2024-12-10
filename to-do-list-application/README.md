To-Do List Application in C
===========================

This is a simple To-Do List application written in **C**. The application allows users to perform various operations on tasks such as adding new tasks, listing all tasks, editing tasks, and deleting tasks. All tasks are stored in a `todo.txt` file to persist the data between runs.

Features
--------

*   Add a new task
*   List all tasks
*   Edit an existing task
*   Delete a task
*   All tasks are saved to a `todo.txt` file for persistence

How to Compile and Run the Program
----------------------------------

Follow these steps to compile and run the To-Do List application:

1.  **Save the code to a file:** Save the provided code in a file named `to-do-list-application.c`.
2.  **Open Terminal or Command Prompt:** Navigate to the directory where the file is saved.
3.  **Compile the code:** Use the `gcc` compiler to compile the C code. Run the following command in your terminal:

    gcc to-do-list-application.c -o to-do-list-application

5.  **Run the compiled program:** After compiling, you can run the program with the following command:

    ./to-do-list-application

7.  **Follow the on-screen instructions:** The program will display a menu for you to choose from the available operations: add task, list tasks, edit task, delete task, or exit.

Sample Usage
------------

When you run the program, you will be presented with a menu of options. Here's an example of how the program behaves:

\----- To-Do List Application -----
1. Add New Task
2. List All Tasks
3. Edit Task
4. Delete Task
5. Exit
Enter your choice (1-5): 1
Enter your new task: Buy groceries
Task added successfully!

----- To-Do List Application -----
1. Add New Task
2. List All Tasks
3. Edit Task
4. Delete Task
5. Exit
Enter your choice (1-5): 2

----- To-Do List -----
1. Buy groceries

Enter your choice (1-5): 3
Enter task number to edit (1 to 1): 1
Enter the new task content: Buy milk
Task updated successfully!

----- To-Do List Application -----
1. Add New Task
2. List All Tasks
3. Edit Task
4. Delete Task
5. Exit
Enter your choice (1-5): 2

----- To-Do List -----
1. Buy milk

Enter your choice (1-5): 4
Enter task number to delete (1 to 1): 1
Task deleted successfully!

----- To-Do List Application -----
1. Add New Task
2. List All Tasks
3. Edit Task
4. Delete Task
5. Exit
Enter your choice (1-5): 5
Exiting the program...

File Persistence
----------------

The application stores tasks in a file called `todo.txt`. When you add, edit, or delete tasks, the changes are saved to this file. If you restart the program, the tasks from the `todo.txt` file will be loaded automatically.

If the `todo.txt` file doesn't exist, the program will start with an empty list of tasks.

Functions Overview
------------------

*   **Add New Task:** You can add a new task to your to-do list. The task will be appended to the list, and the task count will be updated.
*   **List All Tasks:** This will display all tasks in the list with their respective numbers.
*   **Edit Task:** You can select a task by its number and edit its content. The updated task will replace the old one.
*   **Delete Task:** This allows you to delete a task by selecting its number. The tasks after the deleted one will be shifted up.

Contact
-------

If you have any questions or suggestions, feel free to reach out.