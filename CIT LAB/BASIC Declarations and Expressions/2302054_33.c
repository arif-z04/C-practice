#include <stdio.h>
#define MAX 5
int main()
{
    int number[MAX];
    int max = 0, pos = 0;

    printf("Input 5 integers:\n");
    for(int i = 0; i < MAX; i++){
        scanf("%d", &number[i]);
    }
    
    for(int j = 0; j < MAX; j++){
        if(number[j] > max){
            max = number[j];
            pos = j+1;
        }
    }

    printf("Highest Value: %d\n", max);
    printf("Position: %d\n", pos);
    return 0;
}