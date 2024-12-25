#include <stdio.h>

float C_to_F(float celcius){
    float F = (celcius * (9.0/5.0)) + 32;
    return F;
}

float F_to_C(float fahrenheit){
    float frac = 5.0/9.0;
    float C = (fahrenheit - 32) * frac;
    return C;
}

int main()
{
    printf("Celcius\tFahrenheit\n");
    for(float i = 0; i <= 150; i+=10){
        printf("%.1f\t%.1f\n", i, C_to_F(i));
    }

    printf("\n\nFahrenheit\tCelcius\n");
    for(float i = 0; i <= 150; i+=10){
        printf("%.1f\t%15.1f\n", i, F_to_C(i));
    }

    return 0;
}