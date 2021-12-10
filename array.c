#include<stdio.h>
void main()
{
	int i;
	int j[7];
	j[0] = 2;
	j[1] = 3;
	j[2] = 5;
	j[3] = 7;
	j[4] = 11;
	j[5] = 13;
	j[6] = 17;
	int k[7] = {11, 22, 33, 44, 55, 66, 77};
	int l[] = {2, 3, 5, 7, 11, 17};
	double a[] = {1.6556666345344, 7.62643454, 11.656};
	//different methords for initializing array

	for(i=0; i<7; i++)
	{
		printf("%d\t%d\t%d\t%d\t%f\n", i, j[i], k[i], l[i], a[i]);
	}
	//The array whose index is outside the range of array is 0 here( It generally gives garbage value)
}
