#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a1 = malloc(sizeof(int) * 5);
    int *a2 = malloc(sizeof(int) * 5);

    for(int i = 0; i<5; i++) a1[i] = i;
    for(int i = 0; i<5; i++) a2[i] = i;

    // printf("a1: %p\n", a1);
    // printf("a2: %p\n", a2);
    // for(int i = 0; i < 21; i++){
    //     printf("a[%d] = %d\n", i, a1[i]);
    // }

    printf("a1: %p\n", a1);

    int *save = a1;
    a1 = realloc(a1, sizeof(int) * 20);
    
    printf("a1: %p\n", a1);
    printf("save: %p\n", save);

    // for(int i = 0; i < 25; i++){
    //     printf("a[%d] = %d\n", i, a1[i]);
    // }

    for(int i = 5; i < 20; i++) a1[i] = i;
    for(int i = 0; i < 5; i++){
        printf("save[%d] = %d\n", i, save[i]);

    }
    for(int i = 0; i < 5; i++){
        printf("a1[%d] = %d\n", i, a1[i]);
    }


    free(a1);
    free(a2);  
    return 0;
}