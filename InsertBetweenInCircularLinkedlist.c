#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void traversal(struct node *head)
{
    struct node*ptr=head;
   do
   {
       printf("%d\n",ptr->data);
       ptr=ptr->next;
   }
   while(ptr!=head);
};
struct node*middle(struct node*head,int data, int position)
{
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    int i=2;
    struct node*p=head->next;
    while(p->next!=head && i<position-1)
    {
       p=p->next;
       i++;
    }
    ptr->next=p->next;
    p->next=ptr;
    return head;
}
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
       fifth->next=head;
       printf("Circular linked list befor insertion at middle :\n");
       traversal(head);
       printf("Circular linked list after insertion at middle :\n");
       head=middle(head,45687,5);
       traversal(head);
       
       return 0;
}