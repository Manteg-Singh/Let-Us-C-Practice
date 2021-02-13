#include <stdio.h>
#include <string.h>
int main()
{
    char template[150],final_output[150];
    FILE *ptr=NULL;
    system("cls");
    ptr=fopen("RecieptTemp.txt","r");
    fgets(template,150,ptr);
    puts(template);
    fclose(ptr);



    return 0;
}