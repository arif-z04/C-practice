#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;
    int side;
    
    printf("Enter side: ");
    scanf("%d", &side);
    printf("Pythogorean Triplets with side length less than or equal to %d are:\n",side);
    
    for(a = 1; a<=side; a++){
        for(b = a; b<=side; b++){
            for(c = b; c<=side; c++){
                if(a*a + b*b == c*c){
                    printf("(%d, %d, %d)\n", a,b,c);
                }
            }
        }
    }
    return 0;
}