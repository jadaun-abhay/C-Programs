#include <stdio.h>
#include <stdlib.h>

void getOrder(char, int*, int*);
void getMatrix(char, int*, int, int);
void displayMatrix(char, int*, int, int);
int* multiplyMatrix(int*, int*);

int main()
{
	char str[] = "Order of matrix must be in the form : r x c\n"
		"where, \'r\' is the number of rows\n"
		"\'c\' is the number of columns\n\n";
	printf("%s", str);
	int r1, c1;
	getOrder('A', &r1, &c1);
	int r2, c2;
	getOrder('B', &r2, &c2);
	if (c1 != r2)
	{
		system("clear");
		char message[] = "Matrix multiplication is not possible\n"
			"Condition for matrix multiplication : Number of rows of Matrix A must be equal to number of columns of Matrix B\n";
		printf("%s", message);
		exit(0);
	}
	int A[r1][c1];
	int B[r2][c2];
	getMatrix('A', &A[0][0], r1, c1);
	getMatrix('B', &B[0][0], r2, c2);
	printf("\n");
	system("clear");
	displayMatrix('A', &A[0][0], r1, c1);
	displayMatrix('B', &B[0][0], r2, c2);
	int C[r1][c2];
	for (int i = 0; i < r1; i++)
	{
		for (int j = 0; j < c2; j++)
		{
			C[i][j] = 0;
			for (int k = 0; k < r2; k++)
			{
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}
	printf("C = A x B\n");
	displayMatrix('C', &C[0][0], r1, c2);
	return 0;
}

void getOrder(char matrixName, int* row, int* column)
{
	printf("Enter the order of matrix %c :", matrixName);
	scanf("%d x %d", row, column);
}

void getMatrix(char matrixName, int* matrix, int r, int c)
{
	printf("Enter the elements of matrix %c\n", matrixName);
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			scanf("%d", ((matrix + i*c) + j));
		}
	}
}

void displayMatrix(char matrixName, int* matrix, int r, int c)
{
	printf("Matrix %c\n", matrixName);
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			printf("%d\t", *((matrix + i*c) + j));
		}
		printf("\n");
	}
	printf("\n");
}
