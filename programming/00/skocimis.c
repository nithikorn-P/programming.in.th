#include <stdio.h>

int main()
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n", (c-b > b-a) ? c-b-1 : b-a-1);

    return (0);
}