#include <stdio.h>

int main()
{
    int b, p, value=1;
    printf("Enter base and power\n");
    scanf("%d%d",&b,&p);

    for (int i = 1; i <= p; i++)
    {
        value = value * b;
    }
    printf("%d",value);
    return 0;
}
