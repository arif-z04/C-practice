/*
Write a program for a matchstick game being played between
the computer and a user. Your program should ensure that the
computer always wins. Rules for the game are as follow:
- There 21 Matchsticks
- The computer asks the player to pick 1,2,3 or 4 matchsticks
- After the person picks, the computer does its picking
- Whoever is forced to pick up the last matchstick loses the
    game.
*/

#include <stdio.h>

int main()

{
    int matchSticks = 21, p, c;
    printf("MatchStrick GAME!\n");
    printf("Rules: \n- There 21 Matchsticks\n- The computer asks the player to pick 1,2,3 or 4 matchsticks\n- After the person picks, the computer does its picking\n- Whoever is forced to pick up the last matchstick loses the game.");

    while (1){
        printf("\n\nNumber of Matches Left: %d\n", matchSticks);
        printf("Pick up 1,2,3 or 4 matches: ");
        scanf("%d",&p);

        if(p>4 || p<1){
            continue;
        }
        matchSticks = matchSticks - p;
        printf("Number of Matches Left: %d\n", matchSticks);

        c = 5 - p;
        printf("Out of which computer picked up %d\n",c);

        matchSticks = matchSticks - c;
        if(matchSticks==1)
        {
            printf("Number of Matches Left: %d", matchSticks);
            printf("\nYou lost the game! \n");
            break;
        }
    }
    return 0;
}