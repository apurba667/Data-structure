#include<stdio.h>

#include<stdlib.h>



typedef struct BST

{

    int data ;

    struct BST *left , *right;

}BST;



void insert_BST(BST **root, int n)

{

    if((*root)==NULL)

        {

        BST *temp = (BST*)malloc(sizeof(BST));

        temp->data=n;

        temp->left=NULL;

        temp->right=NULL;

        *root=temp;

        }

    else

    {

        if((*root)->data>n){

            insert_BST((&(*root)->left),n);

        }

        else {

            insert_BST((&(*root)->right),n);

        }

    }

}

int main ()

{
    int minimum;

    BST *root = NULL;

    int a[7]={21,22,49,26,28,70,24};

    int i;

    for(i=0;i<7;i++){

        insert_BST(&root,a[i]);

    }
    for(i=0;i<7;i++){
        if(a[i]<minimum){
            minimum=a[i];
        }
    }
    printf("minimum value = %d",minimum);
return 0;
}

