#include <stdio.h>

int main()
{
    int num,s=0,d;

    printf("Enter a 5 digit number\n");
    scanf("%d",&num);
    for (int i = 1; i < 6; i++)
    {
       d=num%10;                //To do this for any digit no. use WHILE lOOP with 
       s=s+d;                   //condition while(num>0){code}
       num=num/10;

    }
    printf("The sum of digits is %d",s);
    

    
    
    return 0;
}