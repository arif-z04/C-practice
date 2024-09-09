// C Program to take string separated by whitespace using
// scanset characters

#include <stdio.h>
 
int main()
{
    char str[20];
 
    // using scanset in scanf
    scanf("%[^\n]", str);
    printf("%s", str);
 
    return 0;
}
/*

The statement scanf("%[^\n]s", str); in C is used to read
a string from the user input, and it has some special 
syntax that allows it to read the entire line until a 
newline character (\n) is encountered.

^\n: This part specifies the characters to exclude. 
The ^ symbol indicates a negation, so ^\n means 
"read all characters except the newline character (\n)".

If you mistakenly add the s as in "%[^\n]s", the s 
is redundant and might cause unexpected behavior or could be ignored by the compiler.
fgets is generally a safer alternative to read an entire line of input, as it avoids potential buffer overflow issues that can occur with scanf.
*/