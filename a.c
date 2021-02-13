#include <stdio.h>
#include <math.h>
float Edistance(int x1, int y1, int x2, int y2)
{
    return (sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2)));
}
void areaOfCircle(int x1, int y1, int x2, int y2, float (*fptr)(int, int, int, int))
{
    printf("The area = %f\n", 3.14 * pow(fptr(x1, y1, x2, y2), 2));
}

int main()
{
    int x1, y1, x2, y2;
    printf("Enter (x1,y1) and (x2,y2)\n");
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
    areaOfCircle(x1, y1, x2, y2, &Edistance);

    return 0;
}