#include <stdio.h>

int getReverseNumber(int);

int main()
{
	printf("Enter a number :");
	int num;
	scanf("%d", &num);
	int revNum = getReverseNumber(num);
	if (num == revNum)
	{
		printf("%d is a Palindrome Number", num);
	}
	else
	{
		printf("%d is not a Palindrome Number", num);
	}
	printf("\n");
	return 0;
}
int getReverseNumber(int n)
{
	int rev = 0;
	while (n > 0)
	{
		rev = 10*rev + n%10;
		n /= 10;
	}
	return rev;
}

