#include <stdio.h>

int main(){
    float sum = 0;
    
    for(int i = 1; i<=50; i++){
        sum += (float)1/i;
    }
    
    printf("Value of S: %.2f\n", sum);

    return 0;
}