#include<stdio.h>
#include<stdlib.h>
#define max 20
typedef struct stack
{
    int N[max],top;
}stack;
void push(stack *s, int n)
{
    if(s->top== max-1)
    {
        printf("Stack Full");
        return;
    }
    else
    {
        (s->top)++;
        s->N[s->top]=n;
    }
}
int pop(stack *s)
{
    if(s->top == -1)
    {
        return -1;
    }
    else
    {
        int v= s->N[s->top];
        (s->top)--;
        return v;
    }
}
int main()
{
  stack s1,s2;
  s1.top= -1;
  s2.top=-1;
  int m,n,v,p;
  printf("Input Data:");
    while(1)
      {
          scanf("%d",&n);
          if(n>=0)
            push(&s1,n);
          else
                break;
      }
     while(1)
      {
            v=pop(&s1);
            if(v >= 0)

               push(&s2,v);

             else
                break;
      }
      printf("Queue list: \n");
      while(1)
      {
             p=pop(&s2);
            if(p<0)
            {
                break;
            }
            printf("%d\n",p);
      }
  return 0;
}
