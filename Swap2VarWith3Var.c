#include <Stdio.h>
int main()
{
    int c, d,templocation;
    printf("Enter number in C\n");
    scanf("%d", &c);
    printf("Enter number in D\n");
    scanf("%d", &d);
    templocation=d;
    d=c;
    c=templocation;
    printf("new number in C is %d\n",c);
    printf("new number in D is %d",d);

    return 0;
}