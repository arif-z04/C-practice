#include <stdio.h>

int main()
{
    int n, value[10];

    printf("Input number of histogram bar (Maximum 10): ");
    scanf("%d", &n);

    if(n > 10){
        printf("Error! Maximum number is 10.");
        n = 10;
    }

    for(int i = 0; i < n; i++){
        scanf("%d", &value[i]);
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < value[i]; j++){
            printf("#");
        }
        printf("\n");
    }
    return 0;
}