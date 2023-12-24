#include <stdio.h>

#define EOS '\0'

void Swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    char    pattern[51];
    int     glass[] = {1, 0, 0};

    scanf("%s", pattern);
    for (int i = 0; pattern[i] != EOS; ++i)
    {
        if (pattern[i] == 'A')
            Swap(&glass[0], &glass[1]);
        else if (pattern[i] == 'B')
            Swap(&glass[1], &glass[2]);
        else if (pattern[i] == 'C')
            Swap(&glass[0], &glass[2]);
    }

    for (int i = 0; i < 3; ++i)
        if (glass[i] == 1)
            printf("%d\n", i+1);

    return (0);
}