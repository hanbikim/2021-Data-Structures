#include <stdio.h>

int fact_recursion(int n)
{
	if (n == 0)
		return 1;
	if (n == 1)
		return 1;
	return n * fact_recursion(n - 1);
}


void main()
{
	int num;
	scanf_s("%d", &num);
	
	//factorial iteration
	int result = 1;
	for (int i = 1; i < num+1; i++)
	{
		result = result * i;
	}
	printf("iteration : %d\n", result);
	printf("recursion : %d\n", fact_recursion(num));
	return 0;
}