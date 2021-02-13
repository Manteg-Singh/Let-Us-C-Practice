#include <stdio.h>

int main()
{
    float r, g, b;
    float c, m, y, k, w;
    printf("Enter RGB values...\n");
    scanf("%f%f%f", &r, &g, &b);
    if (r > g && r > b)
    {
        w = r / 255;
    }
    if (g > b && g > r)
    {
        w = g / 255;
    }
    if (b > g && b > r)
    {
        w = b / 255;
    }
    c = (w - r / 255) / w;
    m = (w - g / 255) / w;
    y = (w - b/255)/ w;
    k = 1 - w;
    if (r==0&&g==0&&b==0)
    {
        printf("CMYK=0 0 0 0");
    }
    else
    {

        printf("CMYK=%f %f %f %f", c, m, y, k);
    }

    return 0;
}
