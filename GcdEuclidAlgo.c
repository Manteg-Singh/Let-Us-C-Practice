#include <stdio.h>
void gcd(int *num, int *den);
void gcd(int *num, int *den)
{
    int div, sub;
    if (*num > *den)
    {
        while (sub != 0)
        {
            div = *num / *den;
            sub = *num - div * (*den);
            *num=*den;
            *den=sub;
        }
        printf("Their gcd is %d\n",*num);
    }
    else
    {
         while (sub != 0)
        {
            div = *den / *num;
            sub = *den - div * (*num);
            *den=*num;
            *num=sub;
        }
        printf("Their gcd is %d\n",*den);
    }
    
}
int main()
{
    int n, d;
    printf("Enter two numbers\n");
    scanf("%d%d", &n, &d);
    gcd(&n,&d);

    return 0;
}