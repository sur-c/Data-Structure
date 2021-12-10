#include<stdio.h>
int main()
{
	int x=50;
	int s=sizeof(int);
	printf("Size of int %d \n", s);
	printf("Size allocated for x %d \n", sizeof(x));
	printf("Int size %d \n", sizeof(int));
	printf("Long int size %d \n", sizeof(long int));
	printf("Short int size %d \n", sizeof(short int));
	printf("Char size %d \n", sizeof(char));
	printf("Float size %d \n", sizeof(float));
	printf("Double size %d \n", sizeof(double));
}
