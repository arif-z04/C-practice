#include <stdio.h>

int find_max(int arr[], int size){
    int max = arr[0];
    for(int i = 1; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
}
int find_min(int arr[], int size){
    int min = arr[0];
    for(int i = 1; i < size; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
}

double find_avg(int arr[], int size){
    if(size == 0) return 0.0;

    long long sum = 0;
    for(int i =0; i < size; i++){
        sum += arr[i];
    }
    return (double)sum/size;
}


int main(){
    int arr[] = {};
    int size = 0;
    int input;

    printf("Input a positive integer: ");
    
    while(1){
        scanf("%d", &input);
        printf("Input next positive integers: ");
        if(input <= 0) break;
        arr[size++] = input;
    }
    
    if(size==0){
        printf("No positive numbers entered");
    }

    double avg = find_avg(arr, size);

    int max = find_max(arr, size);
    int min = find_min(arr, min);

    printf("\nNumber of positive values entered is %d\n", size);
    printf("Maximum value entered is %d\n", max);
    printf("Minimum value entered is %d\n", min);
    printf("Average value is: %lf\n", avg);

    return 0;
}