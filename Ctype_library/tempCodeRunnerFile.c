#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char *convertToUpper(const char *str){
    return toupper(str);
}   
char *convertToLower(const char *str){
    return tolower(str);
}
int main()
{   
    int size = 100;
    char *input = (char*)malloc(size * sizeof(char));

    while(1){
        int choice = 0;
        printf("Enter a string: ");
        scanf("%s", &input);

        printf("You want all uppercase or lowercase?(1/2):");
        scanf("%d", &choice);

        if(choice == 1){
            input = convertToUpper(input);
            
            break;
        }
    }
    printf("Upper: %s", input);   

    return 0;
}