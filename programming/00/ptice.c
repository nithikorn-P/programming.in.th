#include <stdio.h>

char AdrianAnswer(int n)
{
    switch (n % 3)
    {
        case 1:
            return ('A');
        case 2:
            return ('B');
        case 0:
            return ('C');
        default:
            return (0);
    }
}

char BrunoAnswer(int n)
{
    switch (n % 4)
    {
        case 1:
        case 3:
            return ('B');
        case 2:
            return ('A');
        case 0:
            return ('C');
        default:
            return (0);
    }
}

char GoranAnswer(int n)
{
    switch (n % 6)
    {
        case 1:
        case 2:
            return ('C');
        case 3:
        case 4:
            return ('A');
        case 5:
        case 0:
            return ('B');
        default:
            return (0); 
    }
}

int main()
{
    int     n, max;
    int     score[3] = {0};
    char    name[3][8] = {"Adrian", "Bruno", "Goran"};
    char    str[100] = {0};

    scanf("%d", &n);
    scanf("%s", str);
    for (int i = 1; i <= n; ++i)
    {
        if (AdrianAnswer(i) == str[i-1])
            ++score[0];
        if (BrunoAnswer(i) == str[i-1])
            ++score[1];
        if (GoranAnswer(i) == str[i-1])
            ++score[2];
    }

    max = score[0];
    for (int i = 1; i < 3; ++i)
        if (score[i] > max)
            max = score[i];

    printf("%d\n", max);
    for (int i = 0; i < 3; ++i)
        if (score[i] == max)
            printf("%s\n", name[i]);

    return (0);
}