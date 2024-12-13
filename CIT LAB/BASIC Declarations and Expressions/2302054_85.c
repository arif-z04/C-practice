#include <stdio.h>
#include <stdlib.h>

char* convertToRoman(int num){

    int values[] = {100, 90, 50, 40, 10, 9, 5, 4, 1};
    char *ch[] = {"C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    char *result = (char*)malloc(50*sizeof(char));

    if(!result){
        printf("Memory allocation failed!");
        exit(1);
    }

    int pos = 0;
    for(int i = 0; i < 9; i++){
        while(num >= values[i]){
            for(int j = 0; ch[i][j] != '\0'; j++){ // processes all the characters
                result[pos] = ch[i][j];
                pos++;
            }
            num = num - values[i];
        }
    }
    result[pos] = '\0';
    return result;
}

int main()
{
    for(int i = 0; i <= 100; i++){
        printf("%d\t%s\n", i, convertToRoman(i));
    }

    return 0;
}