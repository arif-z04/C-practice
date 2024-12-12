#include <stdio.h>
#include <string.h>

int main(){
    char string[100];
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = '\0';
    
    printf("Original String: %s\n", string);
    printf("Number of characters: %d\n", strlen(string)); 

    return 0;
}