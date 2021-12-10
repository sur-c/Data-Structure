#include<stdio.h>
int main(void)
{
	int a=10;
	printf("\nValue: %d \taddress: %p\n",a, &a);
	a =20;
	printf("Value: %d \taddress after deinitializing: %p\n",a, &a);
	//The address remains same whereas the value inside it changes

	char b[] ="Hello";
	int i = 0;
	while(i<sizeof(b))
	{
		printf("Address of character %d is: %p\n",i,&b[i]);
		i++;
	}
	//The address is continuous memory allocation for array or string

}
