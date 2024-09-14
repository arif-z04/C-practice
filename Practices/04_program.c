// reverse an array. 

#include <stdio.h>

void reverse_array(int array[], int length){
    int temp = 0;
    for(int i = 0; i < (length/2); i++){
        temp = array[i];
        array[i] = array[length - i - 1];
        array[length - i - 1] = temp;
    }
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int length = sizeof(arr)/sizeof(arr[0]);

    reverse_array(arr, length);
    
    for(int i = 0; i < length; i++){
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}
