#include <stdio.h>
#include <stdlib.h>

int main(){

    double n[4], max, min;
    int length = sizeof(n) / sizeof(n[0]);
    
    printf("Input %d numbers: ", length);

    for (int i = 0; i < length; i++) {
        scanf("%lf", &n[i]);
    }

    for (int i = 0; i < length; i++) {
        if (i == 0) {
            max = n[i];  
            min = n[i]; 
        } else {
            if (n[i] > max) max = n[i];  
            if (n[i] < min) min = n[i];  
        }
    }

    printf("Difference is: %.4lf\n", max - min);

    return 0;
}
