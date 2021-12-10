#include<stdio.h>
void main()
{
	int a=20;
	char c;
	//If we have the execute a program like given below where we have only one condition
	//we use conditional operator
	/* if(a>1000)
	{	
		c='r';
	}
	else
	{
		c='k';
	} */
	
	c=(a>1000)?'r':'k';
	printf("Value of c is %c \n", c);
}
