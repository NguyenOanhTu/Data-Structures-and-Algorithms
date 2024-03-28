#include <stdio.h>
int arr[100];
int partition(int x, int y)
{

    int pivot = x;
    int i = x;
    int j = y;

    while (1 == 1)
    {

        while (i <= j && arr[i] <= arr[pivot])
            i++;
        while (i <= j && arr[j] > arr[pivot])
            j--;

        if (i >= j)
            break;

        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }

    int temp1 = arr[j];
    arr[j] = arr[pivot];
    arr[pivot] = temp1;

    return j;
}
void recursiveQuickSort(int x, int y)
{
    if (x < y)
    {
        int pivot_position = partition(x, y);
        recursiveQuickSort(x, pivot_position - 1);
        recursiveQuickSort(pivot_position + 1, y);
    }
}
int main()
{
    int count;
    printf("How many number: ");
    scanf("%d", &count);

    for (int i = 0; i < count; i++)
    {
        printf("Input number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    recursiveQuickSort(0, count - 1);

    printf("Array after Sorting: ");
    for (int j = 0; j < count; j++)
    {
        printf("%d ", arr[j]);
    }

    return 0;
}