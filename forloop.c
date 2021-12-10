#include<stdio.h>
void main()
{
	int i;
	i=4;

	for(i = 4; i > 0; i = i - 1)
	{
		printf("I am inside for loop with %d iteration\n",i);
	}
	printf("I am out of for loop \n");
	
	//for(;;)
	//	printf("Hello");
	//progarm for infinite looop and we can leave initialization or condition or increment.   
}
