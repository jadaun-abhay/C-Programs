#include <stdio.h>
#include <stdlib.h>

int getFibonacciTerm(int);
void getNumberOfTerms(int*);
int main()
{
	char menu[] = "Select appropriate option -->\n"
		"1. To print fibonacci series using iterative approach\n"
		"2. To print fibonacci series using recursive approach\n"
		"3. To exit\n";
	printf("%s", menu);
	int choice;
	printf("Enter your choice here :");
	scanf("%d", &choice);
	int n;
	int a = 0;
	int b = 1;
	int sum = 0;
	switch(choice)
	{
		case 1:
			getNumberOfTerms(&n);
			printf("Fibonacci Series : ");
			int flag = 0;
			for (int i = 1; i <= n; i ++)
			{
				if (i == 1)
				{
					printf("%d", a);
				}
				else if (i == 2)
				{
					printf(", %d", b);
				}
				else
				{
					sum = a + b;
					if (i <= n)
						printf(", ");
					printf("%d", sum);
					a = b;
					b = sum;
				}
			}
			break;
		case 2:
			getNumberOfTerms(&n);
			printf("Fibonacci Series : ");
			for (int i = 1; i <= n; i ++)
			{
				printf("%d", getFibonacciTerm(i));
				if (i <= n-1)
					printf(", ");
			}
			break;
		case 3:
			printf("Exiting ...\n");
			exit(0);
		default:
			printf("Invalid option selected\nQuiting program ...\n");
	}
	printf("\n");
	return 0;
}
void getNumberOfTerms(int *num)
{
	printf("Enter the number of terms : ");
	scanf("%d", num);
}
int getFibonacciTerm(int n)
{
	if (n == 1)
	{
		return 0;
	}
	else if (n == 2)
	{
		return 1;
	}
	else
	{
		return getFibonacciTerm(n-1) + getFibonacciTerm(n-2);
	}
}
