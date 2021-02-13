#include <stdio.h>
void Roman_Conversion(int x);
int main()
{
    int num;
    printf("Enter number\n");
    scanf("%d", &num);
    Roman_Conversion(num);
    return 0;
}
void Roman_Conversion(int x)
{
    while (x != 0)
    {
        if (x >= 1000)
        {
            printf("m");
            x = x - 1000;
        }
        else if (x >= 500)
        {
            printf("d");
            x = x - 500;
        }
        else if (x >= 100)
        {
            printf("c");
            x = x - 100;
        }
        else if (x >= 50)
        {
            printf("l");
            x = x - 50;
        }
        else if (x >= 10)
        {
            printf("x");
            x = x - 10;
        }
        else if (x >= 5)
        {
            printf("v");
            x = x - 5;
        }
        else if (x >= 1)
        {
            printf("i");
            x = x - 1;
        }
    }
}
