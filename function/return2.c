#include "stdafx.h"
#include "stdlib.h"

int star(int n);

int main()
{
	
	int num = 0 ,n;
	n = 1;
	
	while (n != 0)
	{
		
		printf("enter : ");
		scanf_s("%d", &num);
		n = star(num);
		printf("\n");
		
	}
	return 0;
}

int star(int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("*");

	}

	return i;
}
