#include <stdio.h>

int main()
{
    int score[5] = {0}, temp;
    int winner = 0;

    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            scanf("%d", &temp);
            score[i] += temp;
        }
        if ((winner <= i) && (score[winner] < score[i]))
            winner = i;
    }
    printf("%d %d\n", winner+1, score[winner]);

    return (0);
}