#include <stdio.h>



int main()
{
    
    int year;
    printf("Enter year\n");
    scanf("%d",&year);                             //Leap year is a year divisible by 400 & 4 but not 100...
   if ((year%400==0)||(year%4==0&&year%100!=0))
   {
      printf("It is a leap year");
   }
   else
   {
       printf("Not a leap year");
   }
    return 0;
}
