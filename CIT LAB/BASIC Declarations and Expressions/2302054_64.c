#include <stdio.h>


int find_max();
int find_min();

double find_avg(int arr[], int size){
    if(size == 0) return 0.0;

    long long sum = 0;
    for(int i =0; i < size; i++){
        sum += arr[i];
    }

    return (double)sum/size;
}