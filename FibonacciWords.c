#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{

    char secondLast_term[50] = "a", temp[50];
    char last_term[50] = "b";
    int i;
    for (i = 0; i <= 5; i++)
    {
        printf("%s\t", secondLast_term);    //printing x
        strcpy(temp, secondLast_term);      /*copying x into z*/
        strcpy(secondLast_term, last_term); /*copying y into x*/
        strcat(last_term, temp);            /*adding (concatinating) z in y*/
    }
    return 0;
}