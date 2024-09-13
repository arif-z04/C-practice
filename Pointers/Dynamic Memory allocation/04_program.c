// realloc() security vulnerability
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
    char *password1;
    char *password2;

    password1 = (char*)malloc(8*sizeof(char));
    password2 = (char*)malloc(8*sizeof(char));

    strcpy(password1, "my123ou");
    strcpy(password2, "koma123");

    printf("p1 addr: %p\np2 addr: %p\n",
                password1, password2);
    // printf("p1 addr: %d\np2 addr: %d\n",
    //             (int) password1,
    //             (int) password2);

    for(int i = 0; i < 100; i++){
        printf("%c", password1[i]);
    }
    printf("\n");

    password1 = realloc(password1, 20 * sizeof(char));
    printf("password1: %s\n\n", password1);
    printf("p1 addr: %p\np2 addr: %p\n",
                password1, password2);

    for(int i = 0; i < 100; i++){
        printf("%c", password1[i]);
    }
    
    return 0;
}   
