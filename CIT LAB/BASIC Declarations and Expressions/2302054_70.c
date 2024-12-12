#include <stdio.h>

int main(){

    for(int a = 65; a <= 90; a++){
        printf("[%d-%c] ", a, a);
    }
    for(int a = 97; a <= 122; a++){
        printf("[%d-%c] ", a, a);
    }

    return 0;
}