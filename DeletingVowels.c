#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char sentence[81],s2[81];int j=0;
    printf("Enter the sentence : \n");
    gets(sentence);
    for (int i = 0; i < 81; i++)
    {
        if ((sentence[i] == 'a') || (sentence[i] == 'e') || (sentence[i] == 'i') || (sentence[i] == 'o') || (sentence[i] == 'u'))
        {
            continue;
        }
        else
        {
            s2[j++]=sentence[i];
        }
        
    }
    puts(s2);

    return 0;
}