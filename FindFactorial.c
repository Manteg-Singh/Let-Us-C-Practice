#include <stdio.h>

int main()
{
    int num, factorial;
    printf("Enter number whose factorial u want\n");
    scanf("%d", &num);
    factorial = num;

    while (num > 1)
    {
        factorial = factorial * (num - 1);
        num--;
    }

    printf("Factorial of %d is %d", num, factorial);

    return 0;
}
