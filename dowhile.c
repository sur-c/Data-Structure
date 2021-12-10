#include<stdio.h>
void main()
{
	int x=5;

	do
	{
		printf("you are inside do-while loop \n");
		x--;
	}
	while(x>0);
	printf("ouside do while loop\n");
	//it will execute once even if the condition if not satisfied
}
