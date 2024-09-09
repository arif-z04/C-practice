// Counting vowels in a string.

#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int countVowels(char str[]);

int main()
{
    char str[MAX_SIZE];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    int vowels = countVowels(str);

    printf("Number of vowels: %d\n", vowels);

    return 0;
}

int countVowels(char str[]){
    int count = 0;
    int i = 0;

    while (str[i] != '\0') {
        
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            str[i] == 'o' || str[i] == 'u' || str[i] == 'A' ||
            str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            count++;
        }
        i++;
    }
    return count;
}