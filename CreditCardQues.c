#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{

    char card[16], sum1 = 0, sum2 = 0;
    printf("Enter ur card no.\n");
    gets(card);
    for (int i = 0; i < 16; i++)
    {
        card[i] = card[i] - 48;
    }

    for (int i = 0; i < 8; i++)
    {
        card[2 * i] = 2 * (card[2 * i]);
        if (card[2 * i] >= 10)
        {
            card[2 * i] = (card[2 * i]) - 9;
        }
        sum1 = sum1 + card[2 * i];
    }
    for (int i = 0; i < 8; i++)
    {
        sum2 = sum2 + card[2 * i + 1];
    }
    if ((sum1 + sum2) % 10 == 0)
    {
        printf("Card is valid\n");
    }
    else
    {
        printf("Invalid card\n");
    }

    return 0;
}