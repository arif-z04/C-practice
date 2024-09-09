// password checking with strcmp()

#include <stdio.h>
#include <string.h>
#include <unistd.h>

#define MAX_INPUT 100

void countdown(int seconds){
    for(int i = seconds; i > 0; i--){
        printf("\rPlease wait %d seconds...", i);
        fflush(stdout);
        sleep(1);
    }
    printf("\r\033[2K");
    printf("You can try again now.\n");
}

int main(){

    char storedPassword[] = "password";
    char enteredPassword[MAX_INPUT];

    int maxAttempts = 3;
    int attempts = 0;

    int delaySeconds = 30;

    while(1){

        while(attempts<maxAttempts){
            printf("Enter password: ");
            
            fgets(enteredPassword, sizeof(enteredPassword), stdin);
            enteredPassword[strcspn(enteredPassword, "\n")]= '\0';
            
            if(strcmp(storedPassword, enteredPassword)==0){
                printf("Correct!\n");
                return 0;
            }else{
                printf("Incorrect! Try again!\n");
                attempts++;
            }
        }
        printf("Maximum attempts reached. You must wait %d seconds.\n", delaySeconds);
        countdown(delaySeconds);
        attempts = 0;
    }
    return 0; 

}