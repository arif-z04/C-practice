#include <stdio.h>


int main(){

    int total = 0;
    int count = 0;
    
    printf("Input Mathematics marks(0 to terminate): ");
    
    while(1){
        int mark;
        scanf("%d", &mark);
        fflush(stdin);
        total += mark;
        
        if(mark == 0) break;
        count++;
    }

    double avg = (double)total/count;

    printf("Average marks in Mathematics: %.2lf", avg);
    
    
    return 0;
}