#include <stdio.h>

#define FALSE   0
#define TRUE    1

typedef struct ingredient
{
    int sour;
    int bitter;
} in_type;

int GetDiff(int a, int b)
{
    return ((a > b) ? a - b : b - a);
}

int main()
{
    int     n, perket, diff, is_tasted;
    in_type in[10], total;

    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
        scanf("%d %d", &in[i].sour, &in[i].bitter);

    perket = 1000000000;
    for (int i = 0; i < (1<<n); ++i)
    {
        total.sour = 1;
        total.bitter = 0;
        is_tasted = FALSE;
        
        for (int j = 0; j < n; ++j)
            if (i & (1 << j))
            {
                total.sour *= in[j].sour;
                total.bitter += in[j].bitter;
                is_tasted = TRUE;
            }
        if (!is_tasted)
            continue;

        diff = GetDiff(total.sour, total.bitter);
        if (diff < perket)
            perket = diff;
    }
    printf("%d\n", perket);

    return (0);
}