#include <stdio.h>
char upper(char c){
    if(c >= 'a' && c <= 'z'){
        return c - 32;
    } else {
        return c;
    }
}
int main(){
    char name[] = "Volvo";
    int length = sizeof(name)/sizeof(name[0]);

    for(int i = 0; name[i] != '\0'; i++){
        printf("%c\n", upper(name[i]));
    }
    return 0;
}