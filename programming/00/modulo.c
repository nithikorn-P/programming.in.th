#include <stdio.h>

int main()
{
    int value;
    int n = 0, remainders[42] = {0};

    for (int i = 0; i < 10; ++i)
    {
        scanf("%d", &value);
        remainders[value % 42] = 1;
    }
    for (int i = 0; i < 42; ++i)
        if (remainders[i] == 1)
            ++n;
    printf("%d\n", n);

    return (0);
}