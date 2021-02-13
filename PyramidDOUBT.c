#include <stdio.h>

int main()
{
    int i, j, k, l, num;
    num = 1;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 6 - i; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= 10; k++)
        {
            printf("%d", num);
            num = num * 11;
            break;
        }
        printf("\n");
    }

    return 0;
}
