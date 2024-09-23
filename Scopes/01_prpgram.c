#include <stdio.h>
#include <stdlib.h>

int globalx = 10; //global variable(File scope) 

extern int shared_var; // this variable can be accessible from another file;
int main()
{
    int x = 10; //Variable x has block scope

    goto label; //Function scope;
    label:
    printf("Hello, world.");

    register int i = 5; // Variable stored in a CPU register;

    static int y = 10; //static variable 
    
    return 0;
}