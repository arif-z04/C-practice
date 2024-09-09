#include <stdio.h>

typedef int kilometer;
typedef char name;

int main(){

    name place[] = "New York";
    kilometer distance = 400;

    printf("Place: %s\n", place);
    printf("Distance: %d\n", distance);    	

    return 0;
}