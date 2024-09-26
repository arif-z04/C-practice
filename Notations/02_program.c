#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    printf("Array notation: %d\n", arr[2]);

    printf("Pointer notation: %d\n", *(arr + 2));
    
    return 0;
}