
#include <stdio.h>

int main(){

    int number;
    
    printf("Input an integer: ");
    scanf("%d", &number); 

    printf("All the divisor of %d are: ", number);
    
    for(int i = 1; i <= number; i++){
    
        if(number % i == 0){
            printf("%d\n", i);
        }
    
    }
    return 0;

}