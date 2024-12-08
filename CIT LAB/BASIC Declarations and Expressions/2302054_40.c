#include <stdio.h>


int main()
{
    int a, b;
    
    printf("\nInput the first integer: ");
    scanf("%d", &a);
    printf("\nInput the second integer: ");
    scanf("%d", &b);

    if(a > b){
        int tmp = b;
        b = a;
        a = tmp;
    }

    for(int i = a + 1; i < b; i++){
        if(i % 7 == 2 || i % 7 == 3){
            printf("%d\n", i);
        }
    }
    return 0;
}