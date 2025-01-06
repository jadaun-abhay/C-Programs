#include <stdio.h>
#include <stdlib.h>

void getOrderOfMatrix(char, int*, int*);
void getMatrix(char, int*, int, int);
void displayMatrix(char, int*, int, int);

int main()
{
	char message[] = "Order of matrix must be in the form of m x n\n";
	printf("%s", message);
	int r1, c1, r2, c2;
	getOrderOfMatrix('A', &r1, &c1);
	getOrderOfMatrix('B', &r2, &c2);
	if (!(r1 == r2 && c1 == c2))
	{
		char mess[] = "Matrix addition is not possible\n"
			"Condition : Order of both matrices must be same";
		printf("%s", mess);
		exit(-1);
	}
	int a[r1][c1];
	int b[r2][c2];
	getMatrix('A', &a[0][0], r1, c1);
	getMatrix('B', &b[0][0], r2, c2);
	displayMatrix('A', &a[0][0], r1, c1);
	displayMatrix('B', &b[0][0], r2, c2);
	printf("\n");
	int c[r1][c1];
	printf("C = A + B");
	printf("\nMatrix C : \n");
	for (int i = 0; i < r1; i++)
	{
		for (int j = 0; j < c1; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
			printf("%d\t", c[i][j]);
		}
		printf("\n");
	}
}

void getOrderOfMatrix(char matrixName, int* row, int* column)
{
	printf("Enter the order of matrix %c : ", matrixName);
	scanf("%d x %d", row, column);
}

void getMatrix(char matrixName, int* matrix, int row, int column)
{
	printf("Enter the elements of the matrix %c : \n", matrixName);
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			scanf("%d", (matrix + i*column + j));
		}
	}
}

void displayMatrix(char matrixName, int* matrix, int row, int column)
{
	printf("Matrix %c : \n", matrixName);
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			printf("%d\t", *(matrix + i*column + j));
		}
		printf("\n");
	}
}	
