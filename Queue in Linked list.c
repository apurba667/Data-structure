#include<stdio.h>
#include<stdlib.h>
typedef struct list
{
    int data;
    struct list *next;

}list;
typedef struct Queue
{
    list *front,*rear;

}Que;

void EnQ(Que **q,int n)
{
     list *temp=(list*)malloc(sizeof(list));
     temp->data=n;
     temp->next=NULL;
     if(((*q)->front==NULL)&&((*q)->rear==NULL))
     {
         (*q)->front=temp;
         (*q)->rear=temp;
         return;
     }
     else
     {
         ((*q)->rear)->next=temp;
         (*q)->rear=temp;
         return;
     }
}
int DeQ(Que **q)
{
    if((*q)->front==NULL)
    {
        (*q)->rear=NULL;
        return -1;
    }
    else
    {
        list *temp=(*q)->front;
        (*q)->front=((*q)->front)->next;
        int v=temp->data;
        free(temp);
        return v;
    }
}

int main()
{
    int n,number,i;
    Que *q=(Que*)malloc(sizeof(Que));
    q->front=NULL;
    q->rear=NULL;
    printf("How many data you want to take: ");
    scanf("%d",&n);
    printf("\nInput Data:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&number);
        EnQ(&q,number);
    }
    printf("\Your Queue list:\n");
    while(1)
    {
        int m=DeQ(&q);
        if(m==-1)
        {
            break;
        }
        else
        {
            printf("%d\n",m);
        }
    }
return 0;
}
