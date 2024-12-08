#include <stdio.h>

int main()
{
    int p, q, r, s;
    printf("Input the first integer: "); 
    scanf("%d", &p);
    printf("Input the second integer: "); 
    scanf("%d", &q);
    printf("Input the third integer: "); 
    scanf("%d", &r);
    printf("Input the fourth integer: "); 
    scanf("%d", &s);

    if((q > r) && (s > p)
         && ((r+s) > (p+q))
         && (q>0) 
         && (r>0) 
         && (s>0)
         && (p%2 == 0)){
        printf("Correct Values");
    } else {
        printf("Wrong Values");
    }

    return 0;
}