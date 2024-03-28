#include <stdio.h>

int main()
{
    int a[100];
    int n;
    do
    {
        printf("How many number: ");
        scanf("%d", &n);
    } while (n < 0 || n > 100);

    for (int i = 0; i < n; i++)
    {
        printf("Input number [%d]: ", i);
        scanf("%d", &a[i]);
    }

    int max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (max < a[i])
            max = a[i];
    }
    printf("\nThe biggest number is %d", max);
    return 0;
}
