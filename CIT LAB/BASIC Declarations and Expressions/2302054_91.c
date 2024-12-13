#include <stdio.h>

int main(){
    int h, m;

    printf("Input hour(h) and minute(m) (separated by a space): ");
    scanf("%d %d", &h, &m);
    
    float degreeHour = (h * 30) + (m * 0.5);
    float degreeMinute = (m * 6);
    
    float degree = degreeHour > degreeMinute 
                    ?degreeHour - degreeMinute
                    :degreeMinute-degreeHour;

    if(degree > 180){
        degree = 360 - degree;
    }
    printf("At %d:%.2d the angle is %.1f degrees.",h, m, degree);
    
    return 0;
}