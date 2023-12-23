#include <stdio.h>

int main()
{
    int n, value;
    int min = 0, max = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &value);
        if (i == 0)
        {
            min = value;
            max = value;
            continue;
        }
        if (value < min)
            min = value;
        if (value > max)
            max = value;
    }
    printf("%d\n%d", min, max);

    return (0);
}