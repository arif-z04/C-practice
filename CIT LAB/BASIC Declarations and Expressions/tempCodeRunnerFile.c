#include <stdio.h>

int main()
{
    int n;
    int sum = 0, count = 0;

    printf("Input each number on a line (888 to exit): \n");
    while(n==888){
        scanf("%d", &n);    
        sum += n;
        count++;
    }

    float avg = (float)sum/count;
    prinf("The avarage value of the said numbers is %f", avg);
     
    return 0;
}