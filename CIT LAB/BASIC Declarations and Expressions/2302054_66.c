#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

float generate_random(float lower, float upper){
    return lower + ((float)rand() / RAND_MAX) * (upper - lower);
}

int main(){
    int n = 50;
    float lower = -0.5;
    float upper = 0.5;

    FILE *file;

    srand(time(NULL));

    printf("%d\n", n);

    file = fopen("2302054_66.txt", "w");

    for(int i = 0; i < n; i++){
        float random = generate_random(lower, upper);
        fprintf(file, "%.4f\n", random);
    }
    fclose(file);

    file = fopen("2302054_66.txt", "r");

    float number;
    while(fscanf(file, "%f", &number) != EOF){
        printf("%.4f\n", number);
    }

    fclose(file);

    return 0;
}