#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char names[5][10] =
        {
            "Rajesh",
            "Ashish",
            "Milind",
            "Puskar",
            "Akash"

        };
    char temp[10];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            if (strcmp(names[j], names[j + 1]) > 0)
            {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        puts(names[i]);
    }
    

    return 0;
}