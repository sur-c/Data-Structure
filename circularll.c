#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}node;

void printLinkedlist(node *ptr)
{  
    node *curr = ptr;  
    if(ptr == NULL)
	{  
        printf("List is empty");  
    }  
    else
    {  
        do
        {    
            printf(" -> %d", curr->data);  
            curr = curr->next;  
        }while(curr != ptr);
    }  
    printf("\n");
}  
      
int main()  
{  
    int i, num, flag = 1;
    node *head;
    node *tail;
    printf("\n Enter atleast 7 elements \n");
    
    while(1)
    {
    	printf("Enter your number ");
    	scanf("%d", &num);
    	if (num == 0)
    	{
    	    if(flag<7)
    	    	printf("\n Please Enter 7 elements \n Abort!! \n");
    	    else
    	    {
    	    	printf("\n The circular linked list is ");
    	    	printLinkedlist(head);
    	    }
    	    break;
    	}
    	else
    	{		   	
        	node *newNode = malloc(sizeof(struct node));  
        	newNode -> data = num;   
        	if(head == NULL)
        	{     
            	head = newNode;  
            	tail = newNode;  
            	newNode -> next = head;  
        	}
    		else 
    		{    
        		tail -> next = newNode;  
        		tail = newNode;  
        		tail -> next = head; 
        		flag++; 
    		}  
    	}
    }
    return 0;  
}
