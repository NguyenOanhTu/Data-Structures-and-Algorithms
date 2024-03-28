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

    printf("Unique Output:\n");
    int arrTemp[100];
    int tempSize = 0;
    for (int i = 0; i < size; i++)
    {
        int flag = 0;
        for (int j = 0; j < size; j++)
        {
            if (i != j)
            {

                if (arr[i] == arr[j])
                {
                    flag = 1;
                }
            }
        }
        if (flag == 0)
        {
            printf("%d\n", arr[i]);
        }
    }
    return 0;
}
