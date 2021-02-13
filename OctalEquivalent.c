#include <stdio.h>
#include <math.h>

int main()
{
    int num, r, oct, p;
    oct = 0;
    p = 0;
    printf("Enter a number\n");
    scanf("%d", &num);
    while (num > 0)
    {
        r = num % 8;
        num = num / 8;
        oct = oct + r * pow(10, p);
        p++;
    }
    printf("%d", oct);

    return 0;
}
