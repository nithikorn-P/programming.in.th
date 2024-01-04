#include <stdio.h>

int main()
{
    int n;
    int width, width_center, height_center;

    scanf("%d", &n);
    height_center = (n + 1) / 2;
    width = 1 + ((height_center-1) * 2);
    width_center = (width + 1) / 2;
    for (int i = 0; i < height_center; ++i)
    {
        for (int j = 1; j <= width; ++j)
        {
            if ((j == width_center + i) || (j == width_center - i))
                printf("*");
            else
                printf("-");
        }
        printf("\n");
    }
    height_center = (n % 2 == 0) ? height_center - 1 : height_center - 2;
    for (int i = height_center; i >= 0; --i)
    {
        for (int j = 1; j <= width; ++j)
        {
            if ((j == width_center + i) || (j == width_center - i))
                printf("*");
            else
                printf("-");
        }
        printf("\n");
    }

    return (0);
}