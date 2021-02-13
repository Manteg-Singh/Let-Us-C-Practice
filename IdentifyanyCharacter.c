#include <stdio.h>

int main()
{
    char x;
    printf("Enter any character\n");
    scanf("%c", &x);
    if ((x <= 90) && (x >= 65))
    {
        printf("It is a upper case letter");
    }
    else if (x >= 97 && x <= 122)
    {
        printf("It is a lower case letter");
    }
    else if (x >= 48 && x <= 57)
    {
        printf("It is an integer from 0 to 9");
    }
    else if (x <= 47 && x >= 0 || (x <= 64 && x >= 58) || (x <= 96 && x >= 91) || (x <= 127 && x >= 123))
        
    {
        printf("It is a special symbol");
    }

    return 0;
}
