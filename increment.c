#include<stdio.h>
void main()
{
	int m=200;
	printf("value of m before increment %d \n", m);
	m=m+1;
	//m+=1
	printf("value of m after increment %d \n", m);
	//using increment operator
	printf("value of m using preincrement operator %d \n", ++m);
	printf("value of m using post increment operator %d \n", m++);
	printf("value of m %d \n", m);
}
