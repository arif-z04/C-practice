
#include <stdio.h>

char* convertToRoman(int num){
    int values[] = {100, 90, 50, 40, 10, 9, 5, 4, 1};
    char *ch[] = {"C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    int pos = 0;

    //allocating memory with size 50
    char *result = (char*)malloc(50 * sizeof(char));
    
    //error handling
    if(!result){
        printf("Memory allocation failed!\n");
        exit(1);
    }
    
    for(int i = 0; i < 9; i++){
        while(num >= values[i]){
            for(int j = 0; ch[i][j] != '\0', j++){
                result[pos] = ch[i][j];
                pos++; 
            }
            num = num - values[i];
        }
    }

    result[pos] = '\0';
    return result;
}

int main(){
    printf("Decimal\tRoman\nnumber\tnumeral\n");
    printf("");
    for(int i = 1; i < 100; i++){
        printf("e)
    }
} 
    