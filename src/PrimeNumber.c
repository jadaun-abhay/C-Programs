#include <stdio.h>

int main()
{
	printf("Enter the number : ");
	int num;
	scanf("%d", &num);
	int flag = 1;
	for (int i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			flag = 0;
			break;
		}
	}
	if (flag)
	{
		printf("%d is a Prime Number", num);
	}
	else
	{
		printf("%d is not a Prime Number", num);
	}
	printf("\n");
	return 0;
}
