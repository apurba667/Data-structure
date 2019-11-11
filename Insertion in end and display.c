#include<stdio.h>
#include<stdlib.h>

typedef struct list
{
    int data;
    struct list *next;
}list;

list *head ;

void after(int value)
{
    list *temp;
    list *var = head;
    temp=(list*)malloc(sizeof(list));
    temp->data=value;
    temp->next=NULL;
    if(head == NULL){
        head=temp;
    }
    else
        {
        while(var->next != NULL)
            {
                var=var->next;
            }
            var->next=temp;
        }
}

void display()
{
    list *p = head;
    while(p != NULL)
    {
        printf("%d   ", p->data);
        p = p->next;
    }
}

int main ()
{
   list *head = NULL;
   int n;
   while(1){
    scanf("%d",&n);
    if (n==-1){
        break;
    }
    else
    {
        after(n);

    }
   }
   display();
    return 0;
}
