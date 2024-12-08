// C basic declarations and expressions

#include <stdio.h>

int main(){
    int x, y;
    float div;

    printf("Input two numbers: \n");
    printf("x: "); scanf("%d", &x);
    printf("y: "); scanf("%d", &y);

    if(y!=0){
        div = x / y;
        printf("%.1f\n", div);
    } else {
        printf("Division not possible.");
    }
    
    return 0;
}