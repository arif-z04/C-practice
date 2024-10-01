// The memset() function sets a block of memory with a specified value. The function is often used to initialize arrays.


#include <stdio.h>
#include <string.h>

int main(){
    char str[50] = "Hello, world!";

    memset(str, 'A', 5);

    printf("Modified string: %s\n", str);

    return 0;
}