#include <stdio.h>

int getString(char*);

int main()
{
	printf("Enter the first string :");
	char *str1;
	int lenStr1 = getString(str1);
	printf("Enter the second string :");
	char *str2;
	int lenStr2 = getString(str2);
	int max = (lenStr1 > lenStr2)? lenStr1: lenStr2;
	if (!(max == lenStr1 && max == lenStr2))
	{
		printf("Not equal\n");
		return 0;
	}
	for (int i = 0; i < max; i++)
	{
		if (*(str1 + i) == *(str2 + i))
		{
			continue;
		}
		else
		{
			printf("Not equal");
			return 0;
		}
	}
	printf("Both are equal");
	printf("\n");
	return 0;
}
int getString(char* s)
{
	char *str = s;
	char ch;
	int size = 0;
	while ((ch = getchar()) != '\n')
	{
		*(str + size) = ch;
		size++;
	}
	*(str + size) = '\0';
	return size;
}
