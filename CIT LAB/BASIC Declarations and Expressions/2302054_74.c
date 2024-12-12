#include <stdio.h>

int main(){

    int count = 0;
    for(char i = 'a'; i<= 'z'; i++){
        printf("%d\t",i);
        count++;
        if(count % 6 == 0){ 
            printf("\n");
        }
    }
    for(char i = 'A'; i<= 'Z'; i++){
        printf("%d\t",i);
        count++;
        if(count % 6 == 0){ 
            printf("\n");
        }
    }
}