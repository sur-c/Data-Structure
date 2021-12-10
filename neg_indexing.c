#include<stdio.h>
void main()
{
	int n;
	int arr[6] = {2, 4, 6, 8, 10, 12};
	int *ar = &arr[4];
	//ar = &arr[4];
	
	for(n=0; n<10; n++)
		printf("\n %d\t %d", n, ar[-n]);

}
