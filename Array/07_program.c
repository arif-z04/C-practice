#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
int main()
{
    double prices[20];
    srand(time(0));
    int length = sizeof(prices)/sizeof(prices[0]);

    for(int i = 0; i<length; i++){
        double randNum = (rand()%100)+1 ;
        prices[i] = randNum;          
    }
    
    for(int j = 0; j<length; j++){
        printf("%.2lf\n", prices[j]);
    }

    return 0;
}