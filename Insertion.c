#include<stdio.h>
#include<malloc.h>

typedef struct list
{
    int info;
    struct list *next;

}list;

list *emplist(list *start , int data);
list *beg(list *start , int data);
list *end(list *start , int data);
list *nposition(list *start , int data , int positon);
void disp(list *start);

int main ()
{
    list *start= NULL;
    int ch , data, position ;
    while (1){
        printf("1. Insert in an empty list\n");
        printf("2. Insert at beginning\n");
        printf("3. Insert at end\n ");
        printf("4. Insert at nth position\n");
        printf("5. Display \n");
        printf("6. End Program\n");
        printf("Enter choice:\n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            if(start!=NULL){
                printf("List is not empty");
                break;
            }
            else {
                printf("Enter data:\n");
                scanf("%d",&data);
                start=emplist(start, data);
                break;
            }
        case 2:
            printf("Enter data:\n");
            scanf("%d",&data);
            start=beg(start, data);
            break;
        case 3:
            printf("Enter data\n");
            scanf("%d",&data);
            start=end(start, data);
            break;
        case 4:
            printf("Enter data:\n");
            scanf("%d",&data);
            printf("Enter position :\n");
            scanf("%d",&position);
            start=nposition(start, data, position);
            break;
        case 5:
            disp(start);
            break;
        case 6:
            exit(0);
        default :
            printf("wrong keyword");

        }
    }
}

list *emplist(list *start, int data)
{
    list *temp;
    temp=(list*)malloc(sizeof(list));
    temp->info =data;
    temp->next= start;
    start = temp;
    return start;
}

list *beg(list *start , int data)
{
    list *temp;
    temp=(list*)malloc(sizeof(list));
    temp->info=data;
    temp->next=start ;
    start =temp;
    return start;
}

list *end(list *start , int data)
{
    list *p,*temp;
    temp=(list*)malloc(sizeof(list));
    temp->info =data;
    p = start;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=temp;
    temp->next=NULL;
    return start;

}

list *nposition(list *start, int data, int position)
{
    int i;
    list *temp,*p;
    temp=(list*)malloc(sizeof(list));
    temp->info=data;
    if(position == 1){
        temp->next=start;
        start=temp;
        return start;
    }
    p=start;
    for(i=1;i<position-1 && p!=NULL; i++){
        p=p->next;
    }
    if(p==NULL){
        printf("There are less then %d elements\n",position);
    }
    else{
        temp->next=p->next;
        p->next=temp;
    }
    return start;
}

void disp(list *start)
{
    list *p;
    if(start == NULL){
        printf("list is empty\n");
    }
    else{
        p=start;
        printf("list:\n");
        while(p !=NULL){
            printf("%d\t",p->info);
            p=p->next;
        }
        printf("\n");
    }
}
