#include <stdio.h>
#include <stdlib.h>

int main() {
    int file_count;
    printf("Enter file count: ");
    scanf("%d", &file_count);

    for (int i = 1; i <= file_count; i++) {
        char filename[100];  // Allocate enough space for full file path
        sprintf(filename, "E:\\STUDY\\C\\String_library\\0%d_program.exe", i);  // Modify this path to your files

        // Attempt to delete the file
        if (remove(filename) == 0) {
            printf("File %s deleted successfully.\n", filename);
        } else {
            perror("Error deleting the file");  // perror gives a detailed error message
        }
    }

    return 0;
}
