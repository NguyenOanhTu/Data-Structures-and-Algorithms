#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n;
    int arr[100];
    printf("How many number? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Input number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int current = 0;
    bool flag = false;
    while ((current < n) && (flag == false))
    {
        int walker = n - 1;
        flag = true;
        while (walker > current)
        {
            if (arr[walker] < arr[walker - 1])
            {
                flag = false;
                int temp;
                temp = arr[walker];
                arr[walker] = arr[walker - 1];
                arr[walker - 1] = temp;
            }
            walker = walker - 1;
        }
        current = current + 1;
    }

    printf("Bubble Sort: ");
    for (int j = 0; j < n; j++)
    {
        printf("%d ", arr[j]);
    }
    return 0;
}
