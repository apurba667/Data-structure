#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define size 10
typedef struct Queue
{
   int array[size], front, rear,total;
}Queue;

void EnQ(Queue *q,int n)
{

     if(q->total==size - 1)
     {
         printf("Queue Full");
         return;
     }
     else
     {
         q-> rear= q->rear+1;
         q->array[q->rear]= n;
         q->total++;
         return;
     }
}
int DeQ(Queue *q)
{
    if(q->rear == -1 || q->total == 0)
    {
        printf("Empty Queue");
        return -1;
    }
    else
    {
       int v=q-> array[q->front];
       q->front= q->front+1;
       q->total--;
       return v;
    }
}

int main()
{
    int n;
    Queue q;
    q.front=0;
    q.rear=-1;
    q.total=0;
    while(1)
    {
        scanf("%d",&n);
        if(n<0)
            break;
        else
            EnQ(&q,n);
    }
    while(1)
    {
        n= DeQ(&q);
        if(n==-1)
        {
            break;
        }
        else
        {
            printf("%d\n",n);
        }
    }
return 0;
}
