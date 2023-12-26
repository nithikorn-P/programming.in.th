#include <stdio.h>

void Swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void Heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = (2 * i) + 1;
    int right = (2 * i) + 2;

    if ((left < n) && (arr[left] > arr[largest]))
        largest = left;
    
    if ((right < n) && (arr[right] > arr[largest]))
        largest = right;

    if (largest != i)
    {
        Swap(&arr[i], &arr[largest]);
        Heapify(arr, n, largest);
    }
}

void HeapSort(int arr[], int n)
{
    for (int i = (n/2) - 1; i >= 0; --i)
        Heapify(arr, n, i);

    for (int i = n - 1; i >= 0; --i)
    {
        Swap(&arr[0], &arr[i]);
        Heapify(arr, i, 0);
    }
}

int main()
{
    int d[4];

    for (int i = 0; i < 4; ++i)
        scanf("%d", &d[i]);

    HeapSort(d, 4);
    printf("%d\n", d[0] * d[2]);

    return (0);
}