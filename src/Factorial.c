#include <stdio.h>
#include <stdlib.h>

void getNumber(int*);
int getFactorial(int);

int main()
{
	char menu[] = "Select the appropriate option -->\n"
		"1. To get the factorial using iterative technique\n"
		"2. To get the factorial using recursive technique\n"
		"3. To exit\n";
	printf("%s", menu);
	int choice;
	printf("Enter your choice :");
	scanf("%d", &choice);
	int num;
	int factorial;
	switch (choice)
	{
		case 1:
			getNumber(&num);
			for (int i = 0; i <= num; i++)
			{
				if (i == 0)
				{
					factorial = 1;
				}
				else
				{
					factorial *= i;
				}
			}
			break;
		case 2:
			getNumber(&num);
			factorial = getFactorial(num);
			break;
		case 3:
			printf("Exiting ...\n");
			exit(0);
			break;
		default:
			printf("Invalid option selected !\nExiting ...\n");
	}
	printf("Factorial of %d : %d\n", num, factorial);
	return 0;
}

void getNumber(int *n)
{
	printf("Enter the number : ");
	scanf("%d", n);
}

int getFactorial(int n)
{
	if (n == 0 || n == 1)
	{
		return 1;
	}
	else
	{
		return n * getFactorial(n-1);
	}
}
