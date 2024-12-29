#include <stdio.h>
#include <math.h>

int getNumberOfDigits(int);

int main()
{
	printf("Enter the number : ");
	int num;
	scanf("%d", &num);
	int digits = getNumberOfDigits(num);
	int sum = 0;
	int n = num;
	while (n > 0)
	{
		sum += pow(n%10, digits);
		n /= 10;
	}
	if (sum == num)
	{
		printf("%d is Armstrong Number\n", num);
	}
	else
	{
		printf("%d is not Armstrong Number\n", num);
	}
	return 0;
}

int getNumberOfDigits(int n)
{
	int digits = 0;
	while (n > 0)
	{
		digits++;
		n /= 10;
	}
	return digits;
}
