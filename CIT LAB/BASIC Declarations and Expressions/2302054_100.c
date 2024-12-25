#include <stdio.h>
#include <math.h>

int main()
{
    float amount;
    float notes[] = {100.0, 50.0, 20.0, 10.0, 5.0, 2.0, 1.0};
    float coins[] = {0.50, 0.25, 0.10};

    int noteCount[7] = {};
    int coinsCount[3] = {};

    printf("Input the amount: ");
    scanf("%f", &amount);

    for (int i = 0; i < sizeof(notes) / sizeof(notes[0]); i++)
    {
        if (amount >= notes[i])
        {
            noteCount[i] = amount / notes[i];
            amount -= noteCount[i] * notes[i];
        }
    }
    amount = roundf(amount * 100) / 100;
    for (int i = 0; i < sizeof(coins) / sizeof(coins[0]); i++)
    {
        if (amount >= coins[i])
        {
            coinsCount[i] = amount / coins[i];
            amount -= coinsCount[i] * coins[i];
            amount = roundf(amount * 100) / 100;
        }
    }

    printf("\nCurrency Notes:\n");
    for (int i = 0; i < sizeof(notes) / sizeof(notes[0]); i++) {
        if (noteCount[i] > 0) {
            printf("%.0f number of Note(s): %d\n", notes[i], noteCount[i]);
        }
    }

    printf("\nCurrency Coins:\n");
    for (int i = 0; i < sizeof(coins) / sizeof(coins[0]); i++) {
        if (coinsCount[i] > 0) {
            printf("%.2f number of Coin(s): %d\n", coins[i], coinsCount[i]);
        }
    }
    return 0;
}