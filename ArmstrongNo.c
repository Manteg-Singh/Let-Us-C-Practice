#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Amstrong numbers are\n");
    for (int i = 1; i <= 500; i++)
    {
        c = i % 10;
        b=i%100;
        b=(b-c)/10;
        a=i/100;
        if (i==(a * a * a) + (b * b * b) + (c * c * c))
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
