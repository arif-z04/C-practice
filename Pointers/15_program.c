#include <stdio.h>
#include <stdlib.h>

int main(){

    printf("Enter size: ");
    
    int size; scanf("%d", &size);
    int *a = calloc(size, sizeof(int));

    for(int i = 0; i < size; i++){
        a[i] = size - i;
    }
    for(int i = 0; i < size; i++){
        printf("a[%d] = %d\n", i, a[i]);
    }
    printf("\n");
    printf("a: %p\n", a);

    a = realloc(a, sizeof(int) * (size + 5));

    for(int i = size; i < (size+5); i++){
        a[i] = 9;
    }

    for(int i = 0; i < (size + 5); i++){
        printf("a[%d] = %d\n", i, a[i]);
    }
    free(a);

}