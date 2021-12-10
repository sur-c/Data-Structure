#include <stdio.h>
int fibonacci(int x)
{
   if(x == 0)
   {
      return 0;
   }
	
   if(x == 1)
   {
      return 1;
   }
   return fibonacci(x-1) + fibonacci(x-2);
}

int  main()
{
   int x;
   for (x = 0; x < 20; x++)
   {
      printf("%d\t\n", fibonacci(x));
   }
   return 0;
}
