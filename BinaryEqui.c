#include <stdio.h>
#include <math.h>
int binary(int, int);
int binary(int num, int i)
{
    if (num > 0)
    {
        int d;
        d = num % 2;
        return (d * pow(10, i) + binary(num / 2, ++i));
    }
    else
    {
        return 0;
    }
}

int main()
{
    int num; //,d,sum,i;
    //i=0;sum=0;
    scanf("%d", &num);
    /*while (num>0)
    {
    
       d=num%2;
       num=num/2;
       sum=sum+d*(pow(10,i));
      
       i++;
    }
    printf("%d",sum);*/
    printf("%d", binary(num, 0));
    return 0;
}
