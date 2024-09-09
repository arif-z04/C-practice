#include <stdio.h> 
#include <math.h> 

int main(){
    long double x, fx;
    printf("  x\tf(x)\n");
    printf("----\t----\n");


    for(x=1.0; x<=10.0; x+=1.0){        
        fx = 3*(pow(x,2)) + 4*x + 2;  
        printf("%.2llf\t%.2llf\n", x, fx);
    
    }
}