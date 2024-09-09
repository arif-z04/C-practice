// #include <stdio.h>
// #include <math.h>

// int main(){
//     int x, i; 
//     float result = 0;

//     printf("Enter the value of x: ");
//     scanf("%d", &x);

//     for(i=1; i<=7; i++){
//         if(i==1){
//             result = result + pow((x-1.0)/x ,i);
//         }else{
//             result = result + (1.0/2) * pow((x-1.0)/x ,i); 

//         }
//     }
//     printf("\nLog(%d) = %f\n", x, result);
//     return 0;
// }

#include <stdio.h> 
#include <math.h> 

long double nlog(long double x); 

int main(){

    long double x, term, sum = 0.0;
    printf("Enter the value of x: ");
    scanf("%llf", &x);
    for(int i=1; i<=1099; i++){
        term = (1.0/i) * pow((x-1)/x, i);
        sum += term; 
    }
    long double y = nlog(x);
    printf("ln(%.3llf): %.8llf\n", x, sum);
    printf("ln(12): %.8llf", y);

}

// long double nlog(long double x){
//     long double term, sum;

//     for(int i=1; i<=1099; i++){
//         term = (1.0/i) * pow((x-1)/x, i);
//         sum += term; 
//     }
//     return sum;
// }
