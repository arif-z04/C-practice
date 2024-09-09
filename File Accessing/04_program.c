#include <stdio.h>
#include <stdbool.h>

int main()
{
    FILE *fh;
    fh = fopen("04_program.txt", "w");
    int input = 0;
        
    while(true){
        printf("Enter a number(-1 quits):");
        scanf("%d", &input);

        if(input==-1)break;
        else fprintf(fh, "%d\n", input);
    }    
    return 0;
}