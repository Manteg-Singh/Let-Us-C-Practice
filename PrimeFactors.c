#include <stdio.h>
void primefactors(int);
void rprimefactors(int,int);

int main()
{
    int num;
    printf("Enter number\n");
    scanf("%d", &num);
    primefactors(num);
    printf("\nUsing recursive\n");
    rprimefactors(num,2);

    return 0;
}

void primefactors(int x)
{

    for (int i = 2; i <= x;)
    {
        if (x % i == 0)
        {
            printf("%d", i);
            x = x / i;
        }
        else
        {
            i++;
        }
    }
}
void rprimefactors(int x,int i)
{
  if (x>1)
  {
      if (x%i==0)
    {
       printf("%d",i);
        rprimefactors(x/i,i);
    }
    else
    {
       rprimefactors(x,i=i+1);
    }
    
  }
  
     
   
}