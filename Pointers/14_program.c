#include <stdio.h>
#include <stdlib.h>

int main(){
    int size = 0;
    printf("Enter size: ");
    scanf("%d", &size);

    int *a = calloc(size, sizeof(int));

    for(int i = 0; i < size; i++) a[i]=size-i;
    for(int i = 0; i < size; i++){
        printf("a[%d] = %d\n", i, a[i]);
    }
    printf("\n");

    printf("a: %p\n", a);
    
    free(a);
    return 0;
} 