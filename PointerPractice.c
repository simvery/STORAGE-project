#include<stodi.h>
void main()
{
int in = 25;
	float fn = 34.5;
	char ch = 'g';

	int *ip;
	float *fp;
	char *cp;

	ip = &in;
	fp = &fn;
	cp = &ch;

	printf_s("Value of in is : %d, address of in is : %p\n", *ip, ip);
	printf_s("Value of fn is : %f, address of fn is : %p\n", *fp, fp);
	printf_s("Value of ch is : %c, address of ch is : %p\n", *cp, cp);
  }
