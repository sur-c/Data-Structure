#include<stdio.h>
void main()
{
	int n=0;
	char my_name[]={'S','u','r','a','j','i','t'};
	char my_name1[]="Surajit";
	printf("%s\n",my_name);
	printf("%s\n",my_name1);  // has an extra space 
	printf("%d\n",sizeof(my_name));
	printf("%d\n",sizeof(my_name1));
	for(n=0;n<8;n++)
    {
    	printf("%d\t%d\t%d\n",n,my_name[n],my_name1[n]);
    }
} 
