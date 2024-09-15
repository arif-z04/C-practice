#include <stdio.h>

// Define a structure containing an array
struct Data {
    int array[5];  // Array of 5 integers
    int size;      // Size of the array
};

// Function to print the array from the structure
void printStructArray(struct Data data) {
    printf("Array elements: ");
    for (int i = 0; i < data.size; i++) {
        printf("%d ", data.array[i]);
    }
    printf("\n");
}

int main() {
    // Initialize the structure with an array
    struct Data myData = {{10, 20, 30, 40, 50}, 5};
    
    // Pass the structure to the function
    printStructArray(myData);

    return 0;
}
