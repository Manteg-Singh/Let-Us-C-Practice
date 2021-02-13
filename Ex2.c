#include <stdio.h>

int main()
{
    int a;
    char x;
    float b;
    label:
    printf("Press 1 for conversion of km to mile\n");
    printf("Press 2 for conversion of inch to foot\n");
    printf("Press 3 for conversion of cm to inch\n");
    printf("Press 4 for conversion of pound to kg\n");
    printf("Press 5 for conversion of inch to meter\n");
    scanf("%d", &a);

{
    switch (a)
    {
    case 1:
        printf("Enter the value\n");
        scanf("%f", &b);
        printf("%f\n", b / 1.609);
        break;
    case 2:
        printf("Enter the value\n");
        scanf("%f", &b);
        printf("%f\n", b / 12);
        break;
    case 3:
        printf("Enter the value\n");
        scanf("%f", &b);
        printf("%f\n", b / 2.54);
        break;
    case 4:
        printf("Enter the value\n");
        scanf("%f", &b);
        printf("%f\n", b / 2.205);
        break;
    case 5:
        printf("Enter the value\n");
        scanf("%f", &b);
        printf("%f\n", b / 39.37);
        break;

    default:
        break;
    }
}
    printf("If u want to exit, Press q, If u want to convert again, Press y\n");
    scanf(" %c", &x);

    if (x == 'q')
    {
        printf("Nice to meet you");
    }
    else if (x == 'y')
    {
        goto label;
    }
    return 0;
}
