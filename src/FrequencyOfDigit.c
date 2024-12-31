#include <stdio.h>
#include <stdlib.h>

void getNumber(int*);
int* function1(int);
void function2(int);

int main()
{
	char menu[] = "The frequency of digits in a number will be calculated on basis of your choice\n"
		"1. Time Complexity : O(n)\n"
		"2. Time Complexity : O(n^2)\n"
		"3. Exit\n"
		"where, n is the number of digits in the number.\n";
	printf("%s", menu);
	printf("Enter your choice : ");
	int choice;
	scanf("%d", &choice);
	int num;
	switch (choice)
	{
		case 1:
			getNumber(&num);
			printf("num = %d\n", num);
			int* ptr = function1(num);
			for (int i = 0; i < 10; i++)
			{
				printf("Frequency of \'%d\' in %d : %d\n", i, num, *(ptr + i));
			}
			break;
		case 2:
			getNumber(&num);
			function2(num);
			break;
		case 3:
			printf("Exiting ...\n");
			exit(0);
		default:
			printf("Invalid Choice\nExiting ...\n");
	}
	return 0;
}

void getNumber(int* ptr)
{
	printf("Enter the number : ");
	scanf("%d", ptr);
}

int* function1(int n)
{
	int freq;
	int digit;
	int* ptr = (int*)calloc(10, sizeof(int));
	while (n > 0)
	{
		digit = n % 10;
		freq = *(ptr + digit);
		freq++;
		*(ptr + digit) = freq;
		n /= 10;
	}
	return ptr;
}

void function2(int n)
{
	int freq;
	int t;
	for (int i = 0; i < 10; i++)
	{
		freq = 0;
		t = n;
		while (t > 0)
		{
			if (t % 10 == i)
			{
				freq ++;
			}
			t /= 10;
		}
		printf("Frequency of \'%d\' in %d : %d\n", i, n, freq);
	}
}
