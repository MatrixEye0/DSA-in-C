#include<stdio.h>
struct node 
{
    int data;
    struct node*left;
    struct node*right;
};
struct node* createnode(int data)
{
    struct node*n;
    };


int main()
{
    struct node *p=createnode(5);
    struct node *p1=createnode(3);
    struct node *p2=createnode(1);
    struct node *p3=createnode(6);
    struct node *p4=createnode(2);
    
    p->left=p1;
    p->right=p2;
    p->left=p3;
    p->right=p4;
    inorder(p);
    return 0;
}