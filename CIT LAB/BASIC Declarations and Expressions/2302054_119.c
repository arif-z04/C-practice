// sum numbers between two integers. skipping those divisible by 7

#include <stdio.h>

int sumNumbersInclusive7(int a, int b){
    int sum = 0;
    int st, ed;
    if(a > b){
        st = b;
        ed = a;
    } else {
        st = a;
        ed = b;
    }

    for(int i = st; i <= ed; i++){
        if(i % 7 == 0){
            continue;
        }
        sum += i;
    }

    return sum;
}

int main(){

    int a, b;

    printf("Input two numbers(integer):\n");
    scanf("%d %d", &a, &b);

    int sum = sumNumbersInclusive7(a, b);

    printf("Sum of all numbers between said numbers (inclusive) not divisible by 7: %d\n", sum);        

    return 0;
}