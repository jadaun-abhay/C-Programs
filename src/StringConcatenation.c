#include <stdio.h>

int getStringInput(char*);

int main()
{
	printf("Enter the first string :");
	char *str1;
	int lenStr1 = getStringInput(str1);
	printf("Enter the second string :");
	char *str2;
	int lenStr2 = getStringInput(str2);
	printf("Concatenated String : \"%s", str1);
	char ch;
	int i = 0;
	while ((ch = *(str2 + i)) != '\0')
	{
		printf("%c", ch);
		i++;
	}
	printf("\"\n");
	return 0;
}
int getStringInput(char* ptr)
{
	char *str = ptr;
	int size = 0;
	char ch;
	while ((ch = getchar()) != '\n')
	{
		*(str + size) = ch;
		size++;
	}
	*(str + size) = '\0';
	return size;
}
