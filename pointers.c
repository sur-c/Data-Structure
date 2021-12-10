#include<stdio.h>
void main()
{
	int y = 10;
	int *py;
	py = &y;
	float *fy;
	printf("y = %d\t&y = %d (Int)", y, &y);
	printf("\ny = %d\t&y = %lu (Long Unsigned Int)", y, &y);
	printf("\ny = %d\t&y = %p (Hexadecimal)", y, &y);
	printf("\ny = %d\t*y = %d", y, *py);                        // Notice the output is same
	printf("\n Size of integer pointer variable %d", sizeof(py));
	printf("\n Size of float pointer variable %d", sizeof(fy));
}
