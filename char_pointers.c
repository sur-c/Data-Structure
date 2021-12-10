#include<stdio.h>
int main(void)
{
	int i;
	char *st = "Hello";
	char str[5] = "India";

	for(i = 0; i < sizeof(st); i++)
		printf("%c ",st[i]);

	char*str_array[] = {"Delhi","Mumbai","Kolkata","Chennai"};
	for(i = 0; i < 4; i++)
		printf("\n%s ", str_array[i]);
	printf("%p \n", str);
	printf("%p \n", &str[0]);
	//the address is same
}
