//String input method!!! vvi

#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100
int main(){
    char name[MAX_SIZE];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    //Remove the newline character
    name[strcspn(name, "\n")] = '\0';

    printf("Your name: %s", name);
}