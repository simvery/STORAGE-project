#include <stdio.h>
int main()
{
	int inumber = 25;
	float fnumber = 34.5f;
	char ch = 'g';

	printf("Value of inumber is : %d, address of inumber is : %p\n",inumber,&inumber);
	printf("Value of fnumber is : %.1f, adress of fnumber is : %p\n",fnumber,&fnumber);
	printf("Value of ch is : %c, address of ch is : %p\n",ch,&ch);


	return 0;

}
