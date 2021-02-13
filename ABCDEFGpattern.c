#include <stdio.h>
#include <math.h>
int main()
{
    int i,j,k,l,count=1;
    for ( i = 1; i <=7; i++)
    {
        
       for ( j = 65; j <=72-i; j++)
       {
           printf("%c",j);
       }
       for (l = 1; l <count;l++)
       {
           printf(" ");
           ;
       }
      count=count+2;
       for ( k = 72-i; k>=65 ; k--)
       {
          printf("%c",k);
       }
       
       printf("\n");
    }
    
    return 0;
}
