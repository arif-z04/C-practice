#include <stdio.h>
#include <string.h>

int main(){
    char number[8];

    printf("Enter a seven digit number: ");
    scanf("%7s", number);

    printf("Output: ");

    for(int i = 0; i < strlen(number); i++){
        printf("%c ", number[i]);
    }

    printf("\n");


    return 0;

}