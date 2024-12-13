#include <stdio.h>

int isPalindrome(int n){
    if(n < 0){
        return 0;
    }
    int org = n;
    int reversed = 0;

    while(n > 0){
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10; 
    }

    return org == reversed; // if false it will return 0 or else 1
}

int main(){
    int n;
    printf("Input a five-digit number: ");
    scanf("%d", &n);

    if(isPalindrome(n)) printf("%d is a palindrome.", n);
    else printf("Not a palindrome.");

    return 0;
}