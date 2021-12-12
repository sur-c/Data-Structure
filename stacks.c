#include<stdio.h>
#include<stdlib.h>

struct node {
    int number;
    struct node* next;
};

struct stack
{
    struct node *top;
};

void printstack(struct stack *s)
{   
    struct node *temp =malloc(sizeof(struct node));
    temp = s->top;
    if(temp == NULL)
        printf("Queue is empty\n");
    while(temp!= NULL)
    {   
        printf("-> %d ", temp->number);
        temp = temp->next;
    }
    printf("\n");
}

void push(struct stack* s, int num)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->number = num;
    temp->next = NULL;
    if(s->top == NULL)
    {
        s->top = temp;
    }    
    
    else
    {
    temp->next = s->top;
    s->top = temp;
    }
}

void pop(struct stack *s)
{
    if(s->top == NULL)
        return;
    
    s->top = s->top->next;
       
}

int main(void)
{
    struct stack *s = malloc(sizeof(struct stack));
    s->top = NULL;
    int num,dec,flag =1;
    
while(flag == 1)
    {
        printf("What You want to do 1.Push\t2.Pop\t3.Abort ");
        scanf("%d",&dec);

        switch (dec)
        {
            case 1:
            {   
                printf("Enter Data ");
                scanf("%d", &num);
                push(s,num);
                printstack(s);
                break;
            }
            case 2:
            {
                pop(s);
                printstack(s);
                break;
            }
            case 3:
            {
                printf("Aborting!\n");
                flag =0;
                break;
            }
            default: printf("Sorry! Wrong input...\nTry Again");
        }
    }    

}

