#include <stdio.h>

int main(){
    int limit;
    printf("Enter limit: ");
    scanf("%d", &limit);

    for(int a = 1; a*a*a < limit; a++){
        for(int b = a+1; a*a*a + b*b*b < limit; b++){
            for(int c = a+1; c*c*c < limit; c++){
                for(int d = c+1; c*c*c + d*d*d < limit; d++){
                    if(a*a*a + b*b*b == c*c*c + d*d*d){
                        printf("%d can be expressed as %d^3 + %d^3 and %d^3 + %d^3\n",
                        a*a*a + b*b*b, a, b, c, d);
                    }
                }
            }
        }
    }
    return 0;
}
