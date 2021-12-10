#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int number;
	struct node *next;
}node;

struct node *dup(node *copy)
{
    if (copy == NULL)
    	return NULL;

    else
    {
    	node *new = malloc(sizeof(node));
    	new -> number = copy -> number;
    	new -> next = dup(copy -> next);
    	return new;
    }
}	

void printLinkedlist(node *p)
{
	while(p != NULL)
	{
		printf("-> %d ", p -> number);
		p = p -> next;
	}
}

void reversep(node *ref)
{
 	node *current = ref, *prev = NULL,*next = NULL;
    while(current != NULL)
    {
        next = current -> next;
        current -> next = prev;
        prev = current;
        current = next;
    }
    
 	ref = prev;
 	printf("\n The reverse linked list is ");
 	printLinkedlist(ref);
 	printf("\n");
}

int main(void)
{
	node *numbers = NULL;
    int i = 0, num, flag = 1;
	printf("\n Enter atleast 7 elements \n");
	
	while(1)
	{
		int num;
		printf("Enter your number: ");
		scanf("%d", &num);
	
		if (num == 0)
		{	
			if(flag < 7)
		 	printf("Please enter atleast 7 elements \n Abort!! \n");
			 
			else{
			printf("\n The linked list is ");
			printLinkedlist(numbers);
			}
			break;
		}
		
		node *n = malloc(sizeof(node));

		if(!n)
		{
			return 1;		
		}

		n -> number =num;
		n -> next = NULL;

		if(numbers)
		{
			node *ptr;
			
			for (ptr = numbers; ptr != NULL; ptr = ptr -> next)
			{
				if(ptr -> next == NULL)
				{
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
	}
	if(flag >= 7 )
	{
		node *newlist = dup(numbers);
    	reversep(newlist);
	}
}
