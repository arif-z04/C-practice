// The strcpy() function copies the contents of one string into another.


#include <stdio.h> 
#include <string.h>

int main()
{
    char src[] = "C programming";
    char dest[20];

    strcpy(dest, src);

    printf("Copied String: %s", dest);
    
    return 0;
}