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
       
       traversal(head);
       
       return 0;
}