#include <stdio.h>

int main()
{
    int amount;
    int notes[] = {100, 50, 20, 10, 5, 2, 1};
    int count[7] = {0};

    printf("Input the amount: ");
    scanf("%d", &amount);

    for(int i = 0; i < 7; i++){
        if(amount >= notes[i]){
            count[i] = amount/notes[i];
            amount = amount % notes[i];
        }
    }
    
    printf("There are: \n");
    for(int i = 0; i < 7; i++){
        printf("%d Note(s) of %.2f\n", count[i], (float)notes[i]);
    }   

    return 0;
}