#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char input[1000];
    printf("Input some text: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';


    char *word = strtok(input, " ");

    printf("\n");
    while(word!=NULL){
        printf("%s\n", word);
        word = strtok(NULL, " ");
    }

    return 0;
}