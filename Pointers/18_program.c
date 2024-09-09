#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int size;
    int *a;
    printf("Enter a size: "); scanf("%d", &size);
    a = malloc(sizeof(int) * size);
    srand(time(0));
    for(int i = 0; i < size; i++){
        int random_number = rand()%100 +1;
        a[i] = random_number;
    }
    for(int i = 0; i < size; i++){
        printf("a[%d] = %d\n", i, a[i]);
    }

    a = realloc(a, sizeof(int) * 10);
    
    free(a);
    
    return 0;
}