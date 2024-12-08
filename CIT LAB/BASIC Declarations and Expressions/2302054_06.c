#include <stdio.h>
#include <math.h>

#define PI 3.14

int main(){
    float radius, permiter, area;
    
    printf("Enter radius: ");
    scanf("%f", &radius);

    permiter = 2 * PI * radius;
    area = PI * radius * radius;

    printf("Perimeter of the circle: %f inches\n", permiter);
    printf("Area of the circle: %f square inches\n", area);

    return 0;
}