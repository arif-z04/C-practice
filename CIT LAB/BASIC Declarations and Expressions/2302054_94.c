#include <stdio.h>

float BMI(int weight, float height)
{
    float temp = weight / (height * height);
    return temp;
}

int main()
{
    int weight;
    float height;
    printf("Input the weight: ");
    scanf("%d", &weight);
    printf("Input the height: ");
    scanf("%f", &height);

    float bmi = BMI(weight, height);

    printf("BMI: %f\n", bmi);
    printf("Grade: ");
    if (bmi < 18)
        printf("Under\n");
    else if (bmi < 25)
        printf("Normal\n");
    else if (bmi < 30)
        printf("Over\n");
    else if (bmi < 40)
        printf("Obese\n");
    else
        printf("Error\n");

    return 0;
}