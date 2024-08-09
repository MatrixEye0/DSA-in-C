#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void traversal(struct node *ptr)
{
   while(ptr!=NULL) 
   {
       printf("%d\n",ptr->data);
       ptr=ptr->next;
   }
   printf("\n");
};
struct node *insertbetween(struct node *head,int data,int index)
{
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    struct node*p=head;
    int i=0;
    while( i!=index-1)
    {
         p=p->next;
         i++;
    }
    ptr->data=data;
     ptr->next=p->next;
     p->next=ptr;
     return head;
};
int main()
{
       struct node *head;
       struct node *second;
       struct node *third;
       struct node *fourth;
       struct node *fifth;
       head=(struct node*)malloc(sizeof(struct node));
       second=(struct node*)malloc(sizeof(struct node));
       third=(struct node*)malloc(sizeof(struct node));
       fourth=(struct node*)malloc(sizeof(struct node));
       fifth=(struct node*)malloc(sizeof(struct node));
       head->data=32;
       head->next=second;
       second->data=45;
       second->next=third;
       third->data=106;
       third->next=fourth;
       fourth->data=79;
       fourth->next=fifth;
       fifth->data=24;
       fifth->next=NULL;
       
       traversal(head);
       head=insertbetween(head,353,2);
       traversal(head);
       
       return 0;
}

