#include<stdio.h>
int main(void)
{
	struct complex{
	int re;
	int im;
	int *ptr;
	};
	
	struct complex c1, c2;
	printf("Address of c1 %p \n", &c1);
	printf("Address of c1.re %p \n", &(c1.re));
	printf("Address of c1.im %p \n", &(c1.im));
	printf("Size of c1 %lu \n", sizeof(c1));
}
