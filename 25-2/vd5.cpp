#include <stdio.h>

int main()
{
    int arr[100], size;
    printf("How many numbers? ");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        printf("Input element %d: ", i);
        scanf("%d", &arr[i]);
    }
    return 0;
}
