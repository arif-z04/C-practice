// learn more about the function
// array of Function pointers

#include <stdio.h>

int add(int a, int b){
    return a + b;
}

int substract(int a, int b){
    return a - b;
}

int main(){
    int (*operations[2])(int, int) = {add, substract};

    int a = 10, b = 5;

    printf("Addition: %d\n", operations[0](a, b));
    printf("Substraction: %d\n", operations[1](a, b));

    return 0;
}