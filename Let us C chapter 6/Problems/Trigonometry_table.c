#include <stdio.h>
#include <math.h> 
#define PI 3.14159265358979

int main(){

    float start, end; 
    int step; 
    printf("Start: ");
    scanf("%f",&start);
    printf("End: ");
    scanf("%f",&end);
    printf("Step: ");
    scanf("%d", &step);

    printf("Angle\tSine\tCosine\tTangent\n");
    printf("-----\t----\t------\t-------\n");

    for(int i=start; i<=end; i+=step){

        long double sin_val = sin(i*0.0174533);
        long double cos_val = cos(i*0.0174533);
        long double tan_val = tan(i*0.0174533);

        printf("%d\t%.2llf\t%.2llf\t%.2llf\n", i, sin_val, cos_val, tan_val);

}
    return 0;
}   