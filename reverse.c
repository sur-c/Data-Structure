#include <stdio.h>  
#include <string.h>  
void main()  
{  
    char str[100], rstr[100];  
    printf (" \n Enter a string to be reversed : ");  
    scanf ("%s", str);  
    *rstr = strrev(str);
    printf (" \n The reverse string is : %s ", rstr);  
      
}
