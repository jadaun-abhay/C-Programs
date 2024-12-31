#include <stdio.h>
#include <stdlib.h>

void getNumbers(int*, int*);
void swap1(int*, int*);
void swap2(int*, int*);

int main()
{
	char menu[] = "Select appropriate choice -->\n"
		"1. Swap two numbers using third variable\n"
		"2. Swap two numbers without using third variable\n"
		"3. Exit\n";
	printf("%s", menu);
	int choice;
	printf("Enter your choice : ");
	scanf("%d", &choice);
	int a;
	int b;
	switch (choice)
	{
		case 1:
			getNumbers(&a, &b);
			printf("Before swap\na = %d, b = %d\n", a, b);
			swap1(&a, &b);
			printf("After swap\na = %d, b = %d\n", a, b);
			break;
		case 2:
			getNumbers(&a, &b);
			printf("Before swap\na = %d, b = %d\n", a, b);
			swap2(&a, &b);
			printf("After swap\na = %d, b = %d\n", a, b);
			break;
		case 3:
			printf("Exiting ...\n");
			exit(0);
		default:
			printf("Invalid choice\nExiting ...");
	}
	return 0;
}

void getNumbers(int* x, int* y)
{
	printf("Enter the value of a : ");
	scanf("%d", x);
	printf("Enter the value of b : ");
	scanf("%d", y);
}

void swap1(int* x, int* y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

void swap2(int* x, int* y)
{
	*x = *x + *y;
	*y = *x - *y;
	*x = *x - *y;
}
