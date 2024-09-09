#include <stdio.h> 

int main()
{

    int i, j, n;
    double sum = 0.0;
    double factorial;
    printf("Enter a number: ");
    scanf("%d", &n);


    for(i = 1; i<=n; i++){
        factorial = 1.0;
        for(j =1; j <= i; j++){
            factorial = factorial * j;
        }
        sum += i/factorial; 
    }

    printf("The sum of the first %d terms is: %lf\n",n ,sum);

    return 0;
}