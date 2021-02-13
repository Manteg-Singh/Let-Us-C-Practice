#include <stdio.h>
#include <math.h>

int main()
{
    int n1, n2, n5, n10, n50, n100, amt;
    printf("Enter the amount\n");
    scanf("%d", &amt);

    n100 = amt / 100;            //no. of 100 Rs notes
    amt = amt - (n100 * 100);

    n50 = amt / 50;               //no. of 50 Rs notes
    amt = amt - (n50 * 50);

    n10 = amt / 10;               //no. of 10 Rs notes
    amt = amt - (n10 * 10);

    n5 = amt / 5;                  //no. of 5 Rs notes
    amt = amt - (n5 * 5);

    n2 = amt / 2;                //no. of 2 Rs notes
    amt = amt - (n2 * 2);

    n1 = amt / 1;              //no. of 1 Rs notes
    amt = amt - (n1 * 1);

    printf("No. of 100Rs notes=%d\nNo. of 50Rs notes=%d\nNo. of 10Rs notes=%d\nNo. of 5Rs notes=%d\nNo. of 2Rs notes=%d\nNo. of 1Rs notes=%d\n", n100, n50, n10, n5, n2, n1);

    return 0;
}
