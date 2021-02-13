#include <stdio.h>

int main()
{
    int num,count;
    count=0; 
    printf("Enter Number\n");
    scanf("%d",&num);
    for (int i = 1; i <=num; i++)
    {
       if (num%i==0)
       {
           count=count+1;
       }
       
    }
    if (count==2)
    {
        printf("Prime Number");
    }
    else
    {
        printf("Not Prime");
    }
    






    return 0;
}
