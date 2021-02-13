#include<stdio.h>

int main()
{
    int a, i=1;
    printf("Enter a number whose table you need\n");
    scanf("%d",&a);
    do
    {
        printf("%dX%d=%d\n", a,i,a*i);
        i=i+1;
    } while (i<=10);
    
    
    
    return 0;
}
