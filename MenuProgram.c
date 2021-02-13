#include <stdio.h>

int main()
{
    int num, a, b, c, factorial, count;
    do
    {
        printf("Press\n1 for Factorial\n2 for Prime or not\n3 for odd or even\n4 to Exit the program\n");
        scanf("%d", &num);
        factorial = 1, count = 0;
        switch (num)
        {
        case 1:
            printf("Enter number whose factorial u want\n");
            scanf("%d", &a);
            while (a > 0)
            {
                factorial = factorial * (a);
                a--;
            }

            printf("Factorial is %d\n\n", factorial);
            break;
        case 2:
            printf("Enter number which u want to know is prime or not\n");
            scanf("%d", &b);
            for (int i = 1; i <= b; i++)
            {
                if (b % i == 0)
                {
                    count++;
                }
            }
            if (count == 2)
            {
                printf("%d is a prime number\n\n", b);
            }
            else
            {
                printf("%d is not a prime number\n\n", b);
            }
            break;
        case 3:
            printf("Enter a number which you want to know is odd or even\n");
            scanf("%d", &c);
            if (c % 2 == 0)
            {
                printf("%d is an Even Number\n\n", c);
            }
            else
            {
                printf("%d is an Odd number\n\n", c);
            }

            break;
        case 4:
            num == 4;
        }
    } while (num != 4);

    return 0;
}
