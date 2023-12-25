#include <stdio.h>

int main()
{
    int x[9], fake_dwarves[9] = {0};
    int sum = 0;

    for (int i = 0; i < 9; ++i)
    {
        scanf("%d", &x[i]);
        sum += x[i];
    }

    for (int i = 0; i < 9; ++i)
        for (int j = i; j < 9; ++j)
        {
            if (i == j)
                continue;

            if (sum - x[i] - x[j] == 100)
            {
                fake_dwarves[i] = 1;
                fake_dwarves[j] = 1;
            }
        }

    for (int i = 0; i < 9; ++i)
    {
        if (fake_dwarves[i])
            continue;

        printf("%d\n", x[i]);
    }

    return (0);
}