#include <stdio.h>

int main()
{
    printf("List of square of each one of the even values from 1 to 4: \n");
    for(int i = 1; i <= 4; i++){
        if(i%2==0){
            printf("%d^2 = %d\n", i, i*i);
        }
    }    
    return 0;
}