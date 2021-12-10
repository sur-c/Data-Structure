#include<stdio.h>
void main()
{
	int maths=82;
	int chemistry=92;
	int physics=89;
	int biology=80;
	int total=maths + chemistry + physics + biology;
	float percent=(total/400.0)*100.0;
	char grade='B';
	printf("Maths marks %d \n", maths);
	printf("Chemistry marks %d \n", chemistry);
	printf("Physics marks %d \n", physics);
	printf("Biology marks %d \n", biology);
	printf("Total marks %d \n", total);
	printf("Percentage %f \n", percent);
	printf("Grade %c \n", grade);
}
