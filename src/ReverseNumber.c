#include <stdio.h>

int main()
{
	printf("Enter a number : ");
	int num;
	scanf("%d", &num);
	int rev = 0;
	int digit;
	int n = num;
	while (n > 0)
	{
		digit = n % 10;
		rev = 10*rev + digit;
		n /= 10;
	}
	printf("Reverse of %d : %d\n", num, rev);
	return 0;
}
