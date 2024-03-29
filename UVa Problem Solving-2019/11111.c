#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* left,*right;
};

struct node* newNode(int item)
{
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data=item;
    ptr->left=ptr->right=NULL;
    return ptr;
};

void inorder(struct node* root)
{
    if(root!=NULL)

      inorder(root->left);
      printf("%d",root->data);
      inorder(root->right);
}
struct node* insert(struct node* node, int data)
{
    if(node==NULL)return newNode(data);

    if (data < node->data)
        node->left  = insert(node->left, data);
    else if (data > node->data)
        node->right = insert(node->right, data);
        return node;
}
int main()
{
    struct node* root = NULL;
    root = insert(root,50);
    insert(root,30);
    insert(root,20);
    insert(root,40);
    insert(root,70);
    insert(root,60);
    insert(root,80);

    inorder(root);
    return 0;
}

