// validate password

#include <stdio.h>

int main()
{
    const int correctPassword = 1234;
    int inputPassword;
    int x = 1;

    while(x!=0){
        printf("Input the password: ");
        scanf("%d", &inputPassword);

        if(inputPassword == correctPassword){
            printf("Correct password\n");
            x = 0;
        } else {
            printf("Incorrect password. Try again!\n");
        }
    }

    return 0;
}