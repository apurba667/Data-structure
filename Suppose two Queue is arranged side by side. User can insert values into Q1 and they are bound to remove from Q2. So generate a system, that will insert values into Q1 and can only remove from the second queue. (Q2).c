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
    Que *q1=(Que*)malloc(sizeof(Que));
    Que *q2=(Que*)malloc(sizeof(Que));
    q1->front=NULL;
    q2->front=NULL;
    q1->rear=NULL;
    q2->rear=NULL;
    printf("How many data you want to take: ");
    scanf("%d",&n);
    printf("\nInput Data for Q1:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&number);
        EnQ(&q1,number);
    }
    for(i=0;i<n;i++)
    {
        number=DeQ(&q1);
        EnQ(&q2,number);
    }
    printf("\Your Queue list:\n");
    while(1)
    {
        int number=DeQ(&q2);
        if(number==-1)
        {
            break;
        }
        else
        {
            printf("%d\n",number);
        }
    }
return 0;
}
