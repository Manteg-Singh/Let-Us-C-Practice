#include <stdio.h>


int main()
{
    int num,d;
    printf("Enter a number 5 digit number\n");
    scanf("%d",&num);
    for (int i = 0; i < 5; i++)      //To do this for any digit no. use WHILE lOOP with 
    {                                //condition while(num>0){code}                 
         d=num%10;                               
        printf("%d",d);             
        num=num/10;
    }
    
    return 0;
}
