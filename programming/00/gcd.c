#include <stdio.h>

int main()
{
    int a, b;
    int largest;
    int result = 1;

    scanf("%d %d", &a, &b);
    largest = (a > b) ? a : b;
    for (int i = largest; i > 0; --i)
    {
        if ((a % i == 0) && (b % i == 0))
        {
            result = i;
            break;
        }
    }
    printf("%d\n", result);

    return (0);
}