#include <stdio.h>
int main()
{
    int count, i, j;
    count = 0;
    printf("Prime Numbers from 1 to 300\n");
    for (int i = 2; i <= 300; i++)
    {
        count=0;
        for (int j = 1; j <=i; j++)
        {
           
           if (i%j==0)
           {
               count=count+1;
           }
           
        }
if (count==2)
{
    printf("%d ",i);
}

        
    }
    return 0;
}
