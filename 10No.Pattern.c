#include <stdio.h>
#include <math.h>
int main()
{
    int i, j, k, count = 1;
    for (int i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 5 - i; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)
        {
            printf(" %d", count);
            count++;
        }

        printf("\n");
    }

    return 0;
}
