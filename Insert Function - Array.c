#include <stdio.h>
#include <stdlib.h>
void insert(int* A, int index, int value, int size);
int main()
{
	//set, initialize
	int size=5;
	int* arr;
	arr = (int*)malloc(sizeof(int) * size);
	*(arr) = 0;
	*(arr+1) = 1;
	*(arr+2) = 2;
	*(arr+3) = 3;
	*(arr+4) = 4;
	//insert
	insert(arr, 2, 5, size);
	for (int i = 0; i < size+1; i++)
	{
		printf("%d ", arr[i]);
	}
	free(arr);
	return 0;
}
void insert(int *A, int index, int value, int size)
{
	realloc(A, sizeof(int)*size + 1);
	for (int i = size -1; i >= index; i--)
	{
		*(A+i+1) = *(A+i);
	}
	*(A+index)= value;
}