#include <stdio.h>
#include <math.h>
int main()
{
    float sum = 0;
    int factorial;
    for (float i = 1; i <= 7; i++)
    {
        factorial = 1;
        for (int j = i; j >= 1; j--)
        {
            factorial = factorial * j;
        }

        sum = sum + i / factorial;
    }
    printf("%f", sum);
    return 0;
}



