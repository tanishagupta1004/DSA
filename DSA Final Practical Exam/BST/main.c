#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *create(int val)
{

    struct node *n;
    n=(struct node *)malloc(sizeof(struct node));
    n->data=val;
    n->left=NULL;
    n->right=NULL;
    return n;
}
struct node *insert(struct node *node,int val)
{

   if(node==NULL)
   {
       return create(val);
   }
   if(val<node->data)
   {
       node->left=insert(node->left,val);
   }
   else
   {
        node->right=insert(node->right,val);
   }
   return node;
}
struct node *inorderpost(struct node *root)
{
    struct node *current = root;


  while (current && current->left != NULL)
    current = current->left;

  return current;
}
struct node *deletenode(struct node *root, int data)
{
    if(root==NULL)
    {
        return root;
    }
    if(data<root->data)
    {
        root->left=deletenode(root->left,data);
    }
    else if(data>root->data)
    {
        root->right=deletenode(root->right,data);
    }
    else// only 0 or 1 child is there
    {
        if(root->left==NULL)
        {
            struct node *temp=root->right;
            free(root);
            return temp;

        }
        else if(root->right==NULL)
        {
            struct node *temp=root->left;
            free(root);
            return temp;

        }

    struct node *temp=inorderpost(root->right);
    root->data=temp->data;
    root->right=deletenode(root->right,temp->data);
    }
    return root;
}

void inorder(struct node *root) {

  if (root != NULL) {
    inorder(root->left);
    printf("%d -> ", root->data);
    inorder(root->right);
  }
}
void preorder(struct node *root) {

  if (root != NULL) {
        printf("%d -> ", root->data);
    inorder(root->left);

    inorder(root->right);
  }
}
void postorder(struct node *root) {

  if (root != NULL) {
    inorder(root->left);

    inorder(root->right);
    printf("%d -> ", root->data);
  }
}

int main()
{
    struct node *root=NULL;
    root=insert(root,5);
    root=insert(root,4);
    root=insert(root,3);
    root=insert(root,2);
    root=insert(root,1);
     printf("\nInOrder Traversal is \n");
    inorder(root);
    printf("\nPreOrder Traversal is \n");
    preorder(root);
    printf("\nPostOrder Traversal is\n");
    postorder(root);
    printf("\nInorder Traversal After Deleting 3 \n");
    root=deletenode(root,3);
    inorder(root);

    /*int ch;
    do
    {
        printf("\n 1. Insert\n 2. Inorder");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                root = insert(root);
                break;
            case 2:
                inorder(root);
                break;

        }
    }while(ch!=3);*/
    return 0;
}
