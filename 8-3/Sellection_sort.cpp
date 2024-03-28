#include <stdio.h>

int main()
{
    int n;
    printf("How many numbers? ");
    scanf("%d", &n);
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        printf("Input number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int current = 0;
    while (current < n - 1)
    {
        int smallest = current;
        int walker = current + 1;
        while (walker < n)
        {
            if (arr[walker] < arr[smallest])
            {
                smallest = walker;
            }
            walker = walker + 1;
        }
        int temp;
        temp = arr[current];
        arr[current] = arr[smallest];
        arr[smallest] = temp;

        current = current + 1;
    }

    printf("Selection Sort: ");
    for (int j = 0; j < n; j++)
    {
        printf("%d ", arr[j]);
    }
    return 0;
}