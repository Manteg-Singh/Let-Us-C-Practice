#include <stdio.h>

int main()
{
    int class, grace, subjects;
    printf("Enter your class and number of subjects u failed in\n");
    scanf("%d%d", &class, &subjects);
    switch (class)
    {
    case 1:
        if (subjects > 3)
        {
            grace = 0;
        }
        else
        {
            grace = 5 * subjects;
        }
        printf("Total grace marks = %d", grace);
        break;
    case 2:
        if (subjects > 2)
        {
            grace = 0;
        }
        else
        {
            grace = 4 * subjects;
        }
        printf("Total grace marks = %d", grace);
        break;
    case 3:
        if (subjects > 1)
        {
            grace = 0;
        }
        else
        {
            grace = 5;
        }
        printf("Total grace marks = %d", grace);
        break;
    default:
        printf("Don't try to be oversmart kid!");
    }

    return 0;
}
