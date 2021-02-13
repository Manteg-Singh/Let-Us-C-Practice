#include <stdio.h>
#include <math.h>
int main()
{
    int small, big, range, num, n;

    printf("Enter no. of values in the set\n");
    scanf("%d", &n);
    printf("Enter the number\n");
    scanf("%d", &num);
    small = big = num;

    while (n > 1)
    {
        printf("Enter the number\n");
        scanf("%d", &num);

        if (num > big)
        {
            big = num;
        }

        if (num < small)
        {
            small = num;
        }

        n--;
    }

    range = big - small;

    printf("Small Number = %d\nBig Number = %d\n", small, big);
    printf("Range is %d\n", abs(range));
    return 0;
}
