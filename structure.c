#include<stdio.h>
void main()
{
	struct complex{
	int re;
	int im;
	};
	
	struct complex c1, c2;
	
	c1.re = 8;
	c1.im = 6;
	
	c2.re = 5;
	c2.im = 4;
	
	printf("c1.re %d \n", c1.re);
	printf("c1.im %d \n", c1.im);
	printf("c2.re %d \n", c2.re);
	printf("c2.im %d \n", c2.im);
}
