#include <stdio.h>

int main()
{   
    double distance, fuel, avgConsume;
    printf("Input total distance in km: "); scanf("%lf", &distance);
    printf("Input total fuel spent in liters: "); scanf("%lf", &fuel);
    avgConsume = distance/fuel;
    printf("Average consumption (km/li): %.3lf", avgConsume);
    
    return 0;
}