#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char s[100], s2[100];
    int j = 0;
    printf("Enter sentence : \n");
    gets(s);

    for (int i = 0; i <= strlen(s); i++)
    {
        if (i == strlen(s) - 3)
        {
            if (((s[i] == 't') || (s[i] == 'T')) && ((s[i + 1] == 'h') || (s[i + 1] == 'H')) && ((s[i + 2] == 'e') || (s[i + 2] == 'E')))
            {
                s2[j]='\0';
                break;

            }
            else
            {
                s2[j] = s[i];
                j++;
            }
            
        }
        else
        {
            if (((s[i] == 't') || (s[i] == 'T')) && ((s[i + 1] == 'h') || (s[i + 1] == 'H')) && ((s[i + 2] == 'e') || (s[i + 2] == 'E')) && (s[i + 3] == 32))
            {
                i = i + 4;
                s2[j] = s[i];
                j++;
            }
            else
            {
                s2[j] = s[i];
                j++;
            }
        }
    }

    printf("After deleting word \"the\" :\n");
    puts(s2);
    return 0;
}