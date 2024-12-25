#include <stdio.h>
#include <ctype.h>

int main(){
    char input[1000];
    int word = 0, line = 0, ch = 0;
    int inWord = 0;

    while(fgets(input, sizeof(input), stdin)){
        line++;

        for(int i = 0; input[i] != '\0'; i++){
            ch++;

            if(isspace(input[i])){
                if(inWord){
                    word++;
                    inWord = 0;
                }
            } else {
                inWord = 1;
            }
        }

        if(inWord){
            ch++;
            inWord = 0;
        }
    }

    printf("\nTotal Lines: %d\n", line);
    printf("Total Words: %d\n", word);
    printf("Total Characters: %d\n", ch);

    return 0;
}