#include <stdio.h>
#include <math.h>

int main(){
    double a, b, c;
    double determinant;

    printf("Input the first number(a): "); scanf("%lf", &a);
    printf("Input the second number(b): "); scanf("%lf", &b);
    printf("Input the third number(c): "); scanf("%lf", &c);

    determinant = (b*b) - (4 * a * c);

    if(determinant > 0 && a!= 0){
        double x, y;
        determinant = sqrt(determinant);
        x = (-b + determinant)/(2*a);
        y = (-b - determinant)/(2*a);

        printf("Root1 = %.5lf\n",x);
        printf("Root2 = %.5lf\n",y);
    
    } else {
        printf("Impossible to find the roots.\n");
    }

    return 0;
    
}