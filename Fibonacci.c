
#include <stdio.h>
void fibo(int, int,int);
void fibo(int x, int y,int n)
{
    int c;
    //static int n = 3;
    if (n <= 24)
    {
        if (x == 1 && y == 1)
        {
            printf("%d %d", x, y);
        }

        printf(" %d ", x + y);
        n++;
        fibo(y, x + y,n);
        ;
    }
    else
    {
        return;
    }
    
}

int main()
{
    fibo(1, 1,2);

    return 0;
}
