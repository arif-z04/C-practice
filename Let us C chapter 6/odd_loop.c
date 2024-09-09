#include <stdio.h>

int main()
{
    char another; 
    int num;

    do
    {
        printf("Enter a number: ");
        scanf("%d", &num);
        printf("Square of %d is %d.\n", num, num*num);
        printf("Want to enter another number?(y/n): ");
        int c;
        while((c=getchar())!='\n'){}
        scanf("%c", &another);
    }while (another=='y');
    return 0;
}