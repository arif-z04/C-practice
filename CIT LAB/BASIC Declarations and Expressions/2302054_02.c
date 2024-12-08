#include <stdio.h>

int main(){
    if(__STDC_VERSION__ >= 201710L){
        printf("We are using C18!\n");
    }
    else if(__STDC_VERSION__ >= 20111l){
        printf("We are using C11!\n");
    }
    else if(__STDC_VERSION__ >= 199901L){
        printf("We are using C99!\n");
    }
    else if(__STDC_VERSION__ >= 201710L){
        printf("We are using C89/90!\n");
    }

    return 0;
}