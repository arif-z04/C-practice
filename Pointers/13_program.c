#include <stdio.h>
#include <stdlib.h>

int main(){
    int *a = calloc(10, sizeof(int));

    for(int i = 0; i < 10; i++){
        a[i] = 10 - i;
    }
    
    for(int i = 0; i < 10; i++){
        printf("a[%d] = %d\n", i, a[i]);
    }

    printf("a: %p\n", a);

    int *save = a;
    // free(a); // This is not gonna work.

    printf("\nsave: %p\n", save);
    for(int i = 0; i < 10; i++){
        printf("save[%d] = %d\n", i, save[i]);
    }
    printf("\n");

    // Now, you can free the memory if you're done with it
    free(a);

    return 0;
}
