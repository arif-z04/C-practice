// Heap inspection security vulnerability

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *password;
    char *other_ptr; 

    password = (char*)malloc(10 * sizeof(char));

    printf("\nTrustworthy Program\n\n");
    printf("Enter your password: ");
    scanf("%s", password);

    free(password);
    other_ptr = password;

    for(int i = 0; i < 10; i++){
        printf("%c", other_ptr[i]);
    }

    return 0;
}