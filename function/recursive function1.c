#include "stdafx.h"
#include "stdlib.h"

int star(int i);

int main()
{
	
	int num = 0 ,n;
	n = 1;
	
	while (1)
	{
		
		printf("enter : ");
		scanf_s("%d", &num);
		if (num == 0)
			break;
		n = star(num);
		printf("\n");
		
	}
	return 0;
}

int star(int i)
{
	if (i == 0)
		return 1;
	else
		printf("*");
		return i * star(i - 1);

}
