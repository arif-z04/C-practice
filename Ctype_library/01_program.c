#include <stdio.h>
#include <ctype.h>

int main()
{

    while(1){
        char c = '\0';
        printf("Is alphanumeric?: ");
        scanf("%c", &c);
        int buff;while((buff = getchar())!='\n');
        if(isalnum(c)){
            printf("True\n");
        }
        else{
            printf("False\n");
        }
    
    }

    return 0;
}