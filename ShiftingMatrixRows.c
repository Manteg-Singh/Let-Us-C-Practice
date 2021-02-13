#include <stdio.h>
void shift(int *p);
void shift(int *p)
{
    int temp[3];

    for (int j = 0; j < 3; j++)
    {
        temp[j] = *(p + j);
        *(p + j) = *(p + j + 2);
    }
    *(p + 3) = *(temp);
    *(p + 4) = *(temp + 1);
}

int main()
{
    int matrix[4][5];
    printf("Enter elements of 4x5 matrix\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Entered matrix is\n");
     for (int i = 0; i < 4; i++)
    {
       for (int j = 0; j < 5; j++)
       {
           printf("%d\t",matrix[i][j]);
       }
       printf("\n");
    }

for (int i = 0; i < 4; i++)
{
    shift(matrix[i]);
}
printf("Shifted matrix :\n");
    for (int i = 0; i < 4; i++)
    {
       for (int j = 0; j < 5; j++)
       {
           printf("%d\t",matrix[i][j]);
       }
       printf("\n");
    }

    return 0;
}