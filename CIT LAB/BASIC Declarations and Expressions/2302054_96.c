#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int c;
    int blank = 0, tab = 0, new_line = 0;
    while((c = getchar())!=EOF){
        if(c==' ')blank++;
        if(c=='\t')tab++;
        if(c=='\n')new_line++;
    }
    printf("blank=%d, tab=%d, newline=%d", blank, tab, new_line);
    return 0;
}