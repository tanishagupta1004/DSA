#include <stdio.h>
#include<stdlib.h>
struct btnode
{
int data;
struct btnode *left;
struct btnode *right;
};
struct btnode *root=NULL;
void insert(int x)
{
struct btnode *temp=(struct btnode*)malloc(sizeof(struct btnode));
printf("Enter the element to be inserted");
scanf("%d",&x);
temp->data=x;
temp->left=NULL;
temp->right=NULL;
if(root==NULL)
{
root=temp;
return;
}
struct btnode *help=root;
struct btnode *ances=NULL;
while(help!=NULL)
{
if(x<help->data)
{
ances=help;
help=help->left;
}
else
{
ances=help;
help=help->right;
}
}
if(ances->data>x)
{
ances->left=temp;
return;
}
ances->right=temp;
return;



}
void del(int x)
{
printf("Enter the element to be Deleted");
scanf("%d",&x);
struct btnode *t1=root,*parent=NULL;
if(t1==NULL)
{
printf("\n Tree empty");
return;
}
while(t1!=NULL)
{
if(x==t1->data)
break;
if(x<t1->data)
{
parent=t1;
t1=t1->left;
}
else
{
parent=t1;
t1=t1->right;
}
}
if(t1==NULL)
{
printf("\n Element not found");
return;
}
if(t1->left==NULL && t1->right==NULL)
{
     if(t1 == root)
        {
            free(t1);
            return ;
        }
if(parent->left==t1)

parent->left=NULL;
else
parent->right=NULL;
free (t1);
return;
}
if(t1->left!=NULL && t1->right==NULL)
{
    if(t1==root)
        {
            root = root->left;
            free(t1);
            return;
        }
if(parent->left==t1)

parent->left=t1->left;
else
parent->right=t1->left;
free (t1);
return;
}
if(t1->left==NULL && t1->right!=NULL)
{
    if(t1==root)
        {
            root = root->right;
            free(t1);
            return;
        }
if(parent->left==t1)

parent->left=t1->right;
else
parent->right=t1->right;
free (t1);
return;
}
if(t1->left!=NULL && t1->right!=NULL)
{
struct btnode *lt,*plt;
lt=t1->left;
while(lt->right!=NULL)
{
plt=lt;
lt=lt->right;
}
t1->data=lt->data;
plt->right=NULL;
free(lt);

return;

}
}






void inorder(struct btnode *curr)
{

if(curr!=NULL)
{
inorder(curr->left);
printf("\t%d",curr->data);
inorder(curr->right);
}
}
void preorder(struct btnode *curr)
{

if(curr!=NULL)
{
printf("\t%d",curr->data);
preorder(curr->left);
preorder(curr->right);
}
}
void postorder(struct btnode *curr)
{

if(curr!=NULL)
{
postorder(curr->left);
postorder(curr->right);
printf("\t%d",curr->data);

}
}
int main()
{


int ch,x;
do
{
    printf("\n 1. Insert \n 2. Delete \n 3. InOrder \n 4. PostOrder \n 5. PreOrder");
    scanf("%d",&ch);
    switch(ch)
    {

    case 1:
        insert(x);
        break;
    case 2:
        del(x);
        break;
    case 3:
        printf("InOrder Traversal is :\n");
        inorder(root);
        break;
    case 4:
        printf("Post Order Traversal is \n");
        postorder(root);
        break;
    case 5:
        printf("PreOrder Traversal is :\n");
        preorder(root);
        break;
    }
}while(ch!=6);



return 0;
}
