#include <stdio.h>

int GetPIndex(int arr[], int n)
{
    for (int i = 2; i <= n; ++i)
    {
        if (arr[i] == 1)
            return (i);
    }
    return (0);
}

int main()
{
    int n, k, p;
    int i, removed = 0;
    int arr[1001] = { [2 ... 1000] = 1};

    scanf("%d %d", &n, &k);
    while (k != removed)
    {
        p = GetPIndex(arr, n);
        for (i = p; i <= n; i += p)
        {
            if (arr[i] == 0)
                continue;

            arr[i] = 0;
            ++removed;

            if (k == removed)
                break;
        }
    }
    printf("%d\n", i);

    return (0);
}