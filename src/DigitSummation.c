#include <stdio.h>

int main()
{
	printf("Enter the number : ");
	int num;
	scanf("%d", &num);
	int n = num;
	int sum = 0;
	while (num > 0)
	{
		sum += num % 10;
		num /= 10;
	}
	printf("Sum of digits in %d : %d", n, sum);
	printf("\n");
	return 0;
}
