// Compute sum of n odd numbers starting from m

#include <stdio.h>

int main(){
    int n, m, sum = 0;
    printf("Input two integers (m, n):\n");
    scanf("%d %d", &m, &n);

    if (m % 2 == 0) {
        m++;
    }

    for (int i = 0; i < n; i++){
        sum += m + (2 * i);
    }

    printf("Sum of %d odd numbers starting from %d:\n%d\n", n, m, sum);
    return 0;
}