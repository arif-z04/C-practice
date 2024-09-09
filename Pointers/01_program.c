#include <stdio.h>

int main()
{
    // pointers: a variable like reference that hold a memory adress to another variable,
    // array etc; Some tasks are performed easily with pointers.

    // * = indirection operator(value at address)
    
    int age = 21; 
    int *pAge = &age;

    printf("Address of age: %p\n", pAge);
    printf("Value of age: %d\n", age);
    printf("Value of pAge: %d\n", *pAge);
    // pAge shows the "Memory Address" where the value of "x" is Stored.
    // *pAge shows the value of "x" which was stored in it. 
    //  
    return 0;
}