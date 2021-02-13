#include <stdio.h>
#include <stdlib.h>

int main()
{
    int chars,i=0;
    char *ptr,a,b;
    while (i<3)
    {
    printf("Enter no of characters in ur E Id\n");
    scanf("%d",&chars);
    getchar();
    printf("Enter a\n");
    scanf("%c",&a);
    getchar();
    printf("Enter b\n");
    scanf("%c",&b);
    getchar();
    i++;
    ptr=(char*)malloc((chars+1)*sizeof(char));
    printf("Enter E Id\n");
    scanf("%s",ptr);
    printf("You entered %s\n",ptr);
    free(ptr);





        
    }
    
    








    return 0;
}