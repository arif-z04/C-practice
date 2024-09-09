#include <stdio.h>

int power(int value, int power);

int main()
{
    printf("2 to the power 4 is: %d", power(2, 4));
    return 0;
}


int power(int value, int power){
    
    int result = value;

    for(int i=1; i < power; i++){
        result *= value;
    }
    
    return result;
}
