#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("Enter the order of the matrix [Format = m x n] : ");
	int r, c;
	scanf("%d x %d", &r, &c);
	int matrix[r][c];
	printf("Enter the elements of the matrix : \n");
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			scanf("%d", &matrix[i][j]);
		}
	}
	printf("\nOriginal matrix : \n");
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			printf("%d\t", matrix[i][j]);
		}
		printf("\n");
	}
	printf("\nTranspose matrix : \n");
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			printf("%d\t", matrix[j][i]);
		}
		printf("\n");
	}
	return 0;
}
