#include <stdio.h>
#include <math.h>

int main(){
    int n=10;
    long int p;
    double q;

    for(int i = 0; i < n; i++){
        if(i==0){
            p = 1;
        } else {
            p = p * 2;
        }

        q = 1.0 / (double) p;

        printf("%2d %8d %20.12lf\n", i, p, q);

    }

    return 0;
}

