// Heap inspection security vulnerability

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char* password;
    password = (char*)malloc(10 * sizeof(char));

    printf("\nTrustworthy Program\n\n");
    printf("Enter your password: ");
    scanf("%s", password);

    free(password);
    return 0;
}