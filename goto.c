#include<stdio.h>
void main()
{
	int i=5;
	printf("Hello world \n");
	printf("How are you? \n");
	goto hi;
	printf("one \n");
	printf("two \n");
	printf("three \n");
	hi:
	printf("I am Surajit Manna \n");
	i++;
	if(i<9)
		goto hi;
	printf("No more going back \n");	
}
