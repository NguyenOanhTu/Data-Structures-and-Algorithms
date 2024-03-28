#include <stdio.h>

int main()
{
    int arr[100];
    int size;
    printf("Input the number of elements: ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {
        printf("Element - [%d]: ", i);
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    printf("Expected Output:");
    printf("\nSum of all elements is  %d", sum);
    return 0;
}
