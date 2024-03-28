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
    if (n > 1)
    {
        int current = 1;
        while (current < n)
        {
            int temp = arr[current];
            int walker = current - 1;
            while (walker >= 0 && temp < arr[walker])
            {
                arr[walker + 1] = arr[walker];
                walker = walker - 1;
            }
            arr[walker + 1] = temp;
            current = current + 1;
        }
    }
    printf("Insertion Sort: ");
    for (int j = 0; j < n; j++)
    {
        printf("%d ", arr[j]);
    }
    return 0;
}