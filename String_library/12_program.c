// The memcpy() function copies n  bytes from one memory location to another.

#include <stdio.h>
#include <string.h>

int main(){
    char src[] = "Hello, world!";
    char dest[50];

    memcpy(dest, src, strlen(src));
    for(int i = 0; i < 50; i++){
        printf("dest[%d] = %c\n",i, dest[i]);
    }
    printf("Copied string: %s\n", dest);
    return 0;
}