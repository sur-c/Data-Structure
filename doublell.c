#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int number; 
	struct node *next;
    struct node *prev;
}node;

void printLinkedlist(node *p)
{
	while(p != NULL)
	{
		printf("-> %d ",p -> number);
		p = p -> next;
	}
	printf("\n");
}

int main(void)
{
    struct node *numbers = NULL;
    int i = 0, num, flag = 1;    
    printf("\n Enter alteast 7 elements \n");

	while(1)
	{
		printf("Enter your number: ");
		scanf("%d", &num);

        if (num == 0)
		{
			if(flag < 7)
				printf("\n Please Enter atleast 7 elements \n Abort!! \n");
			else 
			{
				printf("\n The double linked list is ");
   				printLinkedlist(numbers);	
			}
		 	break;	
		}
		
		node *n = malloc(sizeof(node));
		if(!n)
		{
			return 1;		
		}

		n -> number = num;
		n -> next = NULL;
        n -> prev = NULL;

		if(numbers)
        {	
			node *ptr;
			for (ptr = numbers; ptr != NULL; ptr = ptr -> next)
            {
				if(ptr -> next == NULL)
				{
					n -> prev = ptr;
                	ptr -> next = n;
                	flag++;
					break;
				}
			}
        }
		else
		{
			numbers = n;		
		}
		i++;
	}    
}
