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

    printf("Duplicate Output:\n");
    int arrTemp[100];
    int tempSize = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                int flag = 0;
                for (int q = 0; q < tempSize; q++)
                {
                    if (arr[i] == arr[q])
                    {
                        flag = 1;
                        break;
                    }
                }
                if (flag == 0)
                {
                    printf("%d\n", arr[i]);
                    arrTemp[tempSize] = arr[i];
                    tempSize++;
                }
            }
        }
    }
    return 0;
}
