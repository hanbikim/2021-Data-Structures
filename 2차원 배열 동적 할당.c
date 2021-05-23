#include <stdio.h>
#include <stdlib.h>

void main()
{
	int RowSize;
	int ColSize;
	int index1, index2;
	int** matrix;

	ColSize = 3;
	RowSize = 4;
	//set
	matrix = (int**)malloc(sizeof(int*) * RowSize);
	if (matrix != NULL) {
		for (index1 = 0; index1 < RowSize; index1++)
		{
			matrix[index1] = (int*)malloc(sizeof(int) * ColSize);
		}
		//initialize
		for (index1 = 0; index1 < RowSize; index1++)
		{
			for (index2 = 0; index2 < ColSize; index2++)
			{
				if (matrix[index1] != NULL) {
					matrix[index1][index2] = index1 + index2;
				}
			}
		}
		//get
		for (index1 = 0; index1 < RowSize; index1++)
		{
			for (index2 = 0; index2 < ColSize; index2++)
			{
				if (matrix[index1] != NULL) {
					printf("%d ", matrix[index1][index2]);
				}
			}
			printf("\n");
		}
	//free
		for (index1 = 0; index1 < ColSize; index1++)
		{
		free(matrix[index1]);
		}
		free(matrix);
	}
}