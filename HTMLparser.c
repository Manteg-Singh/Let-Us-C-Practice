#include <stdio.h>
#include <string.h>
void parser(char *string)
{
    int in = 0, index = 0;
    for (int i = 0; i <= strlen(string); i++)
    {
        if (string[i] == '<')
        {
            in = 1;
            continue;
        }
        else if (string[i] == '>')
        {
            in = 0;
            continue;
        }
        if (in == 0)
        {
            string[index] = string[i];
            index++;
        }
    }
    while (string[0] == ' ')
    {
        for (int i = 0; i <= strlen(string); i++)
        {
            string[i] = string[i + 1];
        }
    }
    while (string[strlen(string) - 1] == ' ')
    {
        string[strlen(string) - 1] = '\0';
    }
}
int main()
{
    char str[] = "<h1>             this is a heading   </h1>";
    parser(str);
    printf("The parsed string is ~~%s~~\n", str);
    return 0;
}