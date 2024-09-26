// The strncat() function appends up to n characters from the source string to the destination string.
#include <stdio.h>
#include <string.h>

int main(){

    char str1[20] = "Hello, ";
    char str2[] = "world!";

    strncat(str1, str2, 3);//Concatenate first 3 characters of str2 to str1
    printf("Concatenated String: %s\n", str1);

    return 0;
}