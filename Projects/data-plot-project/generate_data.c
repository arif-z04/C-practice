#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int amount, higher, lower; 
    int numbers[amount];
    
    FILE *file = fopen("dataset.txt", "w");
    if(file==NULL){
        printf("Error opening file for writing.");
        return 1;
    }

    printf("How many numbers you want to generate?: ");
    scanf("%d", &amount);

    printf("Range? :\nHigher: ");scanf("%d", &higher);
    printf("Lower: ");scanf("%d", &lower);

    srand(time(0));

    for(int i = 0; i < amount; i++){
        int random_number = (rand()%(higher - lower + 1) + lower);
        fprintf(file, "%d\n", random_number);
    }
    printf("Dataset has been written.");
    fclose(file);

    return 0;
}