#include <stdio.h>
int sum(int first, int second);

int main()
{
	int x, y, z;
	printf("입력할 두개의 정수를 입력해 주십시오 : ");
	scanf("%d\n%d",&x,&y);
	z=sum(x, y);
	printf("입력받은 두 정수의 합은 : %d입니다.", z);
	return 0;
}

int sum(int first, int second)
{
	int result;
	result = first + second;
	return result;

	
}



