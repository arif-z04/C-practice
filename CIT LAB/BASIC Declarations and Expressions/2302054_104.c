#include <stdio.h>

int main()
{
    float price;
    float new_price;
    printf("Input the item price: ");
    scanf("%f", &price);

    printf("New item price: ");
    scanf("%f", &new_price);

    float inc_price = new_price - price;
    float percentage = (inc_price / price) * 100;
    printf("The increased price: %.2f\n", inc_price);
    printf("The percentage increased: %.2f%%", percentage);
    return 0;
}