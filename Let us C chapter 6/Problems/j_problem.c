#include <stdio.h>

int main(){
    int population = 100000;
    float growth_rate = 0.1;

    for(int year = 1; year<=10; year++){
        population += population*growth_rate;
        printf("Year %2d: Population: %d\n", year, population);
    }
    return 0;
}