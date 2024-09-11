// Finding occurance of a number in an array

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int size;
    int *arr;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    arr = (int*)malloc(size * sizeof(int));

    if(arr==NULL){
        printf("Memory allocation failed!\n");
        return 1;
    }

    //Generating random numbers;
    // srand(time(0));
    // for(int i = 0; i < size; i++){
    //     int random_number = (rand()%(100-70+ 1))+70;
    //     arr[i] = random_number;    
    // }
    
    for (int i = 0; i < size; i++) {
        printf("Enter %d'th place data: ",i);
        scanf("%d", &arr[i]);
    }

    int freq[100][2] = {0};
    int unique_count = 0;

    //need to study this part!
    for(int i = 0; i < size; i++){
        int found = 0;

        for(int j = 0; j < unique_count; j++){
            if(freq[j][0] == arr[i]){
                freq[j][1]++;
                found = 1;
                break;
            }
        }
        if(!found){
            freq[unique_count][0] = arr[i];
            freq[unique_count][1] = 1;
            unique_count++;
        }
    }
    
    for (int i = 0; i < unique_count; i++) {
        printf("%d occurs %d time(s)\n", freq[i][0], freq[i][1]);
    }

    free(arr);
    return 0;
}