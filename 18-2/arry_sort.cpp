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

    int tg;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                // Hoan vi 2 so a[i] va a[j]
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
        }
    }
    printf("\nThe output is ");
    for (int i = 0; i < n; i++)
    {
        printf("%5d", a[i]);
    }
    return 0;
}
