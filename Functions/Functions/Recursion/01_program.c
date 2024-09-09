#include <stdio.h>

int main()
{
    int n = 0;
    int fact = 1; 

    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i=n; i>=1; i--){
        fact = n*fact;
        n--;
    }
    // while(n >=1){
    //     fact *= n;
    //     n--;
    // }
    printf("Factorial : %d", fact); 
    return 0;
}