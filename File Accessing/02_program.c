#include <stdio.h>

int main(){
    FILE *fh; 

    fh = fopen("02_program.txt", "a");
    int data = 5;
    fprintf(fh, "data: %d\n", data);
    fclose(fh);
}