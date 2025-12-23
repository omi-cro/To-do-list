#include <stdio.h>
#include <string.h>

int main() {
    char tasks[50][100];   
    int count = 0;
    int choice;

    while (1) {
        printf("\n--- TO-DO LIST ---\n");
        printf("1. Add Task\n");
        printf("2. View Tasks\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); 

        if (choice == 1) {
            if (count < 50) {
                printf("Enter task: ");
                fgets(tasks[count], 100, stdin);
                tasks[count][strcspn(tasks[count], "\n")] = '\0'; 
                count++;
                printf("Task added successfully!\n");
            } else {
                printf("Task list is full!\n");
            }
        } 
        else if (choice == 2) {
            if (count == 0) {
                printf("No tasks added yet.\n");
            } else {
                printf("\nYour Tasks:\n");
                for (int i = 0; i < count; i++) {
                    printf("%d. %s\n", i + 1, tasks[i]);
                }
            }
        } 
        else if (choice == 3) {
            printf("Exiting program. Goodbye!\n");
            break;
        } 
        else {
            printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}
