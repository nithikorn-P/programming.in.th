#include <stdio.h>

int main()
{
    int m, n;
    int temp;
    scanf("%d %d", &m, &n);

    int matrix[m][n];
    for (int row = 0; row < m; ++row)
        for (int col = 0; col < n; ++col)
            scanf("%d", &(matrix[row][col]));
    for (int row = 0; row < m; ++row)
        for (int col = 0; col < n; ++col)
        {
            scanf("%d", &temp);
            matrix[row][col] += temp;
        }

    for (int row = 0; row < m; ++row)
    {
        for (int col = 0; col < n; ++col)
        {
            printf("%d", matrix[row][col]);
            if (col < n - 1)
                printf(" ");
        }
        printf("\n");
    }

    return (0);
}