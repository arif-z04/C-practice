#include <stdio.h>
#include <string.h>
#define MAX 100
int main()
{
    char string[MAX];
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = '\0';
   
    printf("Original String: %s\n", string);
    printf("Number of characters: %d\n", strlen(string));
   
    return 0;
}