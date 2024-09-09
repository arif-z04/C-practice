#include <stdio.h>

int main()
{
    int grade[5];
    int length = sizeof(grade)/sizeof(grade[0]);
    int total=0;

    for(int i=0; i<length; i++){
        int number;      
        scanf("%d", &number);
        grade[i] = number;
    }

    for(int j=0; j<length; j++){
        printf("grade[%d] = %d\n", j, grade[j]);
        total += grade[j];
    }

    int avarage = total/5;

    printf("Total: %d\n", total);
    printf("Avarage: %d\n", avarage);

    return 0;
}