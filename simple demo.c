#include<stdio.h>
#include<malloc.h>

typedef struct list
{
    float num;
    char ch;
    struct list *next;
}list;
int main()
{
    list *head=NULL;
    list *first,*second,*p;

    first=(list*)malloc(sizeof(list));
    second=(list*)malloc(sizeof(list));

    first->num=2.5;
    first->ch='a';
    first->next=second;

    second->num=3.5;
    second->ch='b';
    second->next=NULL;

    head=first;
    p=head;
    while(p!=NULL)
    {
        printf("%f ",p->num);
        printf("%c\n",p->ch);
        p=p->next;
    }


    return 0;
}
