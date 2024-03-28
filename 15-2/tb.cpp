#include <stdio.h>

int main()
{
	int a;
	int sum = 0;
	int count = 0;
	while (1 == 1)
	{
		printf("Input a number: ");
		scanf("%d", &a);
		if (a == 0)
			break;
		sum = sum + a;
		count++;
	}
	printf("Average number: %d", sum / count);
	return 0;
}

