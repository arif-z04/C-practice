#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
    int size = 100;
    char *str = (char*)malloc(size * sizeof(char));

    if(str == NULL){
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter a string: ");
    fgets(str, size, stdin);

    char strU[size], strL[size];
    for(int i = 0; i < size; i++){
        strU[i] = toupper(str[i]);
        strL[i] = tolower(str[i]);
    }

    printf("Upper: %s", strU);
    printf("Lower: %s", strL);
    free(str);
}