#include <stdio.h>
#include <stdlib.h>

int main() {
    int num_students, num_subjects;

    // Get the number of students and subjects
    printf("Enter the number of students: ");
    scanf("%d", &num_students);

    printf("Enter the number of subjects: ");
    scanf("%d", &num_subjects);

    // Dynamically allocate memory for student names and subject names
    char **student_names = (char **)malloc(num_students * sizeof(char *));
    char **subject_names = (char **)malloc(num_subjects * sizeof(char *));
    
    for (int i = 0; i < num_students; i++) {
        student_names[i] = (char *)malloc(50 * sizeof(char));  // Allocate memory for student names
    }
    for (int i = 0; i < num_subjects; i++) {
        subject_names[i] = (char *)malloc(50 * sizeof(char));  // Allocate memory for subject names
    }

    // Dynamically allocate memory for marks and total marks
    int **marks = (int **)malloc(num_subjects * sizeof(int *));
    int *total = (int *)malloc(num_students * sizeof(int));  // Total marks for each student

    for (int i = 0; i < num_subjects; i++) {
        marks[i] = (int *)malloc(num_students * sizeof(int));
    }

    // Input student names
    for (int i = 0; i < num_students; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", student_names[i]);
        total[i] = 0;  // Initialize total marks to 0
    }

    // Input subject names
    for (int i = 0; i < num_subjects; i++) {
        printf("Enter name of subject %d: ", i + 1);
        scanf("%s", subject_names[i]);
    }

    // Input marks for each subject and each student
    for (int i = 0; i < num_subjects; i++) {
        printf("\nEnter marks for %s:\n", subject_names[i]);
        for (int j = 0; j < num_students; j++) {
            printf("%s: ", student_names[j]);
            scanf("%d", &marks[i][j]);
            total[j] += marks[i][j];  // Add to total
        }
    }

    // Print the table header
    printf("\n%-15s", "Name");
    for (int j = 0; j < num_students; j++) {
        printf("%-10s", student_names[j]);
    }
    printf("\n");

    // Print the marks for each subject
    for (int i = 0; i < num_subjects; i++) {
        printf("%-15s", subject_names[i]);
        for (int j = 0; j < num_students; j++) {
            printf("%-10d", marks[i][j]);
        }
        printf("\n");
    }

    // Print the total marks
    printf("%-15s", "Total");
    for (int j = 0; j < num_students; j++) {
        printf("%-10d", total[j]);
    }
    printf("\n");

    // Free dynamically allocated memory
    for (int i = 0; i < num_students; i++) {
        free(student_names[i]);
    }
    for (int i = 0; i < num_subjects; i++) {
        free(subject_names[i]);
        free(marks[i]);
    }
    free(student_names);
    free(subject_names);
    free(marks);
    free(total);

    return 0;
}
