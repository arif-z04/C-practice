// calculate the avarage marks of 5 subjects
#include <stdio.h>

void inputArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
}

int sumArray(int arr[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    int marks[5];
    int sum = 0;
    float avg;
    
    printf("Input five subjects marks(0-100):\n");
    inputArray(marks, 5);
    sum = sumArray(marks, 5);
    avg = (float)sum / 5;

    printf("Avarage marks: %.2f\n", avg);

    return 0;
}