#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("Enter the number in decimal number system : ");
	int decNum;
	scanf("%d", &decNum);
	int* binNum;
	int n = decNum;
	int i = 0;
	while (n > 0)
	{
		*(binNum + i) = n % 2;
		n /= 2;
		i++;
	}
	printf("Binary Equivalent : ");
	for(int j = (i-1); j >= 0; j--)
	{
		printf("%d", *(binNum + j));
	}
	printf("\n");
	return 0;
}
