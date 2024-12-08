#include <stdio.h>

int main(){
    int a;
    printf("Input an integer: ");
    scanf("%d", &a);

    if(a>=0 && a<=20){
        printf("Range [0, 20]\n");
    }
    else if(a >= 21 && a <= 60){
        printf("Range (21, 40]\n");
    }
    else if(a >= 41 && a <= 80){
        printf("Range (41, 80]\n");
    } else {
        printf("Outside the range\n");
    }


    return 0;
}