#include<stdio.h>
main()
{
	float f=5.586348484515455435145;
	float ff=12345678955664.664647545616485465;
	printf("%.8f \n", f);
	printf("%3.5f \n", f);
	printf("%3.5f \n", ff);
	printf("%d \n", sizeof(f));
	printf("%d \n", sizeof(ff));
}
