#include <stdio.h>
#include <stdlib.h>
void main()
{
	int RowSize;
	int ColSize;
	int index1, index2;
	int** matrix;
	//set
	matrix = (int**)malloc(sizeof(int*) * RowSize);
	for (index1 = 0; index1 < RowSize; index1++)
	{
		matrix[index1] = (int*)malloc(sizeof(int) * ColSize);
	}
	//initialize
	for (index1 = 0; index1 < RowSize; index1++)
	{
		for (index2 = 0; index2 < ColSize; index2++)
		{
			matrix[index1][index2] = index1 + index2;
		}
	}
	//get
	for (index1 = 0; index1 < RowSize; index1++)
	{
		for (index2 = 0; index2 < ColSize; index2++)
		{
			printf("%d ", matrix[index1][index2]);
		}
		printf("\n");
	}
	//free
	for (index2 = 0; index2 < ColSize; index2++)
	{
		free(matrix[index1]);
	}
	free(matrix);
}
