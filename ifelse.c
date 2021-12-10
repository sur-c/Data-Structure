#include<stdio.h>
void main()
{
	int m=500;
	int n=45;
	if(m>n || n!=45)
	{
		m++;
		++m;
		n--;	
	}
	
	if (m<n || n==44)
	{
		m--;
	}
	else
	{
		m=m-50;
	}
	
	printf("new m value = %d \n", m);
	printf("new n value = %d \n", n);
	if(m<500)
		printf("Less than 500 \n");
	else if(m>600)
		printf("More than 600 \n");
	else
		printf("It's in between 500 and 600\n");
}
