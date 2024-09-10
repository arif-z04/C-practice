#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Task {
    char name[100];
    struct Task* next;
} Task;

void addTask(Task** head, const char* name) {
    Task* newTask = (Task*)malloc(sizeof(Task));
    if (newTask == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }
    strcpy(newTask->name, name);
    newTask->next = *head;
    *head = newTask;
}

void printTasks(Task* head) {
    Task* current = head;
    while (current != NULL) {
        printf("Task: %s\n", current->name);
        current = current->next;
    }
}

void freeTasks(Task* head) {
    Task* current = head;
    Task* next;
    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }
}

int main() {
    Task* toDoList = NULL;

    addTask(&toDoList, "Finish homework");
    addTask(&toDoList, "Go to the gym");
    addTask(&toDoList, "Buy groceries");

    printTasks(toDoList);

    freeTasks(toDoList);

    return 0;
}
