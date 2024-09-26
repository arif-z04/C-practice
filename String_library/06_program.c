/*
The strcmp() function compares two strings lexicographically. It returns:

0 if the strings are equal.
A positive value if the first string is greater than the second.
A negative value if the first string is less than the second.
*/

#include <stdio.h>
#include <string.h>

int main(){
    char str1[]= "apple";
    char str2[] = "banana";

    int result = strcmp(str1, str2);

    if(result==0){
        printf("Strings are equal.\n");
    } else if (result < 0) {
        printf("str1 is less than str2.\n");
    } else {
        printf("str1 is greater than str2.\n");
    }
    
    return 0;
}