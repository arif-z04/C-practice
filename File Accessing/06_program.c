#include <stdio.h> 
#include <stdlib.h>
#include <time.h> 

int main(){
    int amount, higher, lower;
    int numbers[amount];

    FILE *file = fopen("06_program.txt", "w+");
    //error handling.
    if(file==NULL){
        printf("Error opeing the file for writing.");
        return 1;
    }

    //generate random number; 
    srand(time(0));

    printf("How many numbers you want to generate?: ");
    scanf("%d", &amount);

    printf("Range:\nHigher: ");scanf("%d", &higher);
    printf("Lower: ");scanf("%d", &lower);

    for (int i = 0; i < amount; i++) {
        int random_number = (rand() % (higher - lower + 1)) + lower;
        fprintf(file, "%d\n", random_number);
    }
    fclose(file);

    file = fopen("06_program.txt", "r");

    if(file==NULL){
        printf("Error opening the file for reading.");
        return 1;
    }

    for(int i = 0; i < amount; i++){
        fscanf(file, "%d", &numbers[i]);
    }

    fclose(file);

    int total = 0;
    for(int i = 0; i<amount; i++){
        total += numbers[i];
    }

    printf("Total: %d\n", total);
    printf("Avarage: %d\n", total/amount);
    
    return 0;
}