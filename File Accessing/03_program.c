#include <stdio.h>

int main()
{
    FILE *fh;
    fh = fopen("03_program.txt", "w");

    for(int i = 0; i<10; i++){
        fprintf(fh,"%d\n", i);
    }
    fclose(fh);
    return 0;
}