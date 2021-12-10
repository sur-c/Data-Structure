#include<stdio.h>
int main()
{
	FILE *fp, *fp2, *fp3;
	char c;
	fp = fopen("test.c", "r");
	//fp2 = fopen("tt", "w");
	fp3 = fopen("tt", "a");
	
	while((c = getc(fp)) != EOF)
	{
		printf("%c", c);
		putc(c+45, fp3);
	}
	
	printf("\n");
	printf("%d", c);
	printf("\n");
	fclose(fp);
	//fclose(fp3);
}
