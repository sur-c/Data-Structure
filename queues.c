#include<stdio.h>
#include<stdlib.h>

struct node {
    int number;
    struct node* next;
};

struct queue
{
    struct node *front,*rear;
};

void printqueue(struct queue *q)
{   
    struct node *temp =malloc(sizeof(struct node));
    temp = q->front;
    if(temp == NULL)
        printf("Queue is empty\n");
    while(temp!= NULL)
    {   
        printf("-> %d ", temp->number);
        temp = temp->next;
    }
    printf("\n");
}

void push(struct queue* q, int num)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->number = num;
    temp->next = NULL;
    if(q->rear == NULL)
    {
        q->front = q->rear = temp;
    }    
    
    else
    {
        q->rear->next = temp;
        q->rear = temp;
    }
}

void pop(struct queue *q)
{
    if(q->front == NULL)
        return;
    
    q->front = q->front->next;

    if (q->front == NULL)
        q->rear = NULL;
       
}

int main(void)
{
    struct queue *q = (struct queue*)malloc(sizeof(struct queue));
    q->front = q->rear = NULL;
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
                push(q,num);
                printqueue(q);
                break;
            }
            case 2:
            {
                pop(q);
                printqueue(q);
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

