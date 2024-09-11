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

    return 0;
}   
