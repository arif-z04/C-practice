#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generatePassword(char* password, int length) {
    char characters[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz!@#$%^&*";
    int charactersLength = sizeof(characters) - 1;

    for (int i = 0; i < length; i++) {
        password[i] = characters[rand() % charactersLength];
    }
    password[length] = '\0'; 
}

int main() {
    char choice;
    srand(time(0));

    do {
        int passwordLength = 0;
        printf("Enter Length of the password: ");
        scanf("%d", &passwordLength);
        char password[passwordLength + 1];

        generatePassword(password, passwordLength);
        printf("Generated Password: %s\n", password);

        printf("Generate another password? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("Program terminated.\n");
    return 0;
}
