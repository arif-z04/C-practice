#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct 
{
    char name[50];
    char id[10];
    int age;
    int grades[5];
} Student;

int main()
{
    Student student;
    printf("STUDENT INFORMATION\n");
    printf("-------------------\n");

    printf("Enter students name: ");
    fgets(student.name, sizeof(student.name), stdin);
    student.name[strcspn(student.name, "\n")] = '\0';
    
    printf("Enter students id: ");
    fgets(student.id, sizeof(student.id), stdin);
    student.id[strcspn(student.id, "\n")] = '\0';

    printf("Enter student's age: ");
    scanf("%d", &student.age);

    int i = 0;
    while(i<5){
        printf("Enter grade: ");
        scanf("%d", &student.grades[i]);
        i++;
        fflush(stdin);
    }
    printf("\n-------------------\n");
    printf("Name: %s\n", student.name);
    printf("Age : %d\n", student.age);
    printf("ID: %s\n", student.id);
    printf("Grades: \n");

    for(int i = 0; i < 5; i++){
        printf("Grades[%d] = %d\n", i, student.grades[i]);
    }
    printf("-------------------\n");

    return 0;
}