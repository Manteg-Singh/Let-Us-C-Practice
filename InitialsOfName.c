#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char s[50];
    char s2[50];
    char *last;
    int count1 = 0, k = 0, j = 0, count2 = 0;
    printf("Enter full name : \n");
    gets(s);
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == 32)
        {
            count1++;
        }
    }
    s2[k] = s[j];
    k++;
    s2[k]='.';
    k++;

    for (int j = 1; j <= strlen(s); j++)
    {

        if ((s[j] == 32) && (count2 < count1 - 1))
        {

            s2[k] =s[++j];
            k++;
            s2[k]='.';
            k++;
            count2++;
        }

        else
        {
            continue;
        }
    }
    s2[k]='\0';
    last = strrchr(s, 32);
    printf("%s%s\n", s2, last);

    return 0;
}