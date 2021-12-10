#include<stdio.h>
int main (int pc, char *cc[])
{
	if(pc<2)
	{
		printf("No operands except the file name itself");
	}
	else
	{
		printf("\n Hello Mr. %s \n", cc[1]);
	}
}
