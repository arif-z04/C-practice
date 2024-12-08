#include <stdio.h>

int main(){

    int totalSeconds, hours, minutes, seconds;

    printf("Input seconds: ");scanf("%d", &totalSeconds);

    hours = totalSeconds / 3600;
    totalSeconds = totalSeconds % 3600;
    minutes = totalSeconds / 60;
    seconds = totalSeconds % 60;

    printf("There are:\nH:M:S - %d:%d:%d\n", hours, minutes, seconds);

    return 0;
}