#include<stdio.h>

int main()
{
    char sub;
    printf("Maths=m \nScience=s\nBoth=b\n");
    printf("In which subject did you pass?\n");
    scanf("%c",&sub);
    if (sub=='b')
    {
        printf("You won cash prize of Rs 45");
    }
    else if (sub=='m')
    {
        printf("You won cash prize of Rs 15");
    }
    else if (sub=='s')
    {
      printf("You won cash prize of Rs 15");
    }
    
    
    return 0;
}
