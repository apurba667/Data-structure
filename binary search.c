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



void preOrder(BST *root)

{

    if (root != NULL){

        printf("%d\n",root->data);

        preOrder(root->left);

        preOrder(root->right);

    }

}



void postOrder(BST *root)

{

    if(root != NULL){

        postOrder(root->left);

        postOrder(root->right);

        printf("%d\n",root->data);

    }

}



void inOrder(BST *root)

{

    if(root != NULL)

    {

        inOrder(root->left);

        printf("%d\n",root->data);

        inOrder(root->right);

    }

}

int main ()

{

    BST *root = NULL;

    int a[7]={21,22,49,26,28,70,24};

    int i;

    for(i=0;i<7;i++){

        insert_BST(&root,a[i]);

    }

        preOrder(root);

        printf("\n");

        postOrder(root);

        printf("\n");

        inOrder(root);



    return 0;

}
