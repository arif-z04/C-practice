#include <stdio.h>

int main()
{
    int n;
    int t = 1;
    int sum = 0, count = 0;

    printf("Input each number on a line (888 to exit): \n");

    while(t){
        scanf("%d", &n);
        if(n==888) break;    
        sum += n;
        count++;
    }

    float avg = (float)sum/count;
    printf("The avarage value of the said numbers is %f", avg);

    return 0;
}