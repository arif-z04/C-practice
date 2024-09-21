#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MIN_PASSWORD_LENGTH 8

void checkPasswordConditions(const char *password);
int isValidPassword(const char *password);

int main()
{
    char password[100];

    while(1){
        printf("Enter password: ");
        scanf("%s", password);

        if(isValidPassword(password)){
            printf("Password is valid. Program terminated.\n");
            break;
        }
        else{
            printf("Invalid password.\n");
            checkPasswordConditions(password);
        }
    }
    return 0;
}

void checkPasswordConditions(const char *password){
    int hasUpper = 0, hasLower = 0, hasDigit = 0, hasSpecial = 0;
    int digitCount = 0;
    for(int i = 0; password[i] != '\0'; i++){
        if(isupper(password[i])){
            hasUpper = 1;
        }
        if(islower(password[i])){
            hasLower = 1; 
        }
        if(isdigit(password[i])){
            digitCount++;
        }
        if(ispunct(password[i])){
            hasSpecial = 1;
        }
    }
    hasDigit = (digitCount >= 2) ? 1 : 0;
    if (!hasUpper) {
        printf("Password needs at least one uppercase letter.\n");
    }
    if (!hasLower) {
        printf("Password needs at least one lowercase letter.\n");
    }
    if (!hasDigit) {
        printf("Password needs at least two digits.\n");
    }
    if (!hasSpecial) {
        printf("Password needs at least one special character.\n");
    }
}

int isValidPassword(const char *password) {
    int hasUpper = 0, hasLower = 0, hasDigit = 0, hasSpecial = 0;
    int digitCount = 0;

    for (int i = 0; password[i] != '\0'; i++) {
        if (isupper(password[i])) {
            hasUpper = 1;
        }
        if (islower(password[i])) {
            hasLower = 1;
        }
        if (isdigit(password[i])) {
            digitCount++;
        }
        if (ispunct(password[i])) { // checks for special characters
            hasSpecial = 1;
        }
    }

    hasDigit = (digitCount >= 2) ? 1 : 0;

    return hasUpper && hasLower && hasDigit && hasSpecial;
}
