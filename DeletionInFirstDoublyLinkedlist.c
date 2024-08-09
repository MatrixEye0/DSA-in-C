#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *prev;
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
struct node *deletefirst(struct node*head)
{
  struct node*p=head;
  head=head->next;
  head->next->prev=NULL;
free(p);
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
       head->prev=NULL;
       head->data=32;
       head->next=second;
       second->prev=head;
       second->data=45;
       second->next=third;
       third->prev=second;
       third->data=106;
       third->next=fourth;
       fourth->prev=third;
       fourth->data=79;
       fourth->next=fifth;
       fifth->prev=fourth;
       fifth->data=24;
       fifth->next=NULL;
       printf("Doubly Linked list before deletion at first :\n");
       traversal(head);
       printf("Doubly Linked list After deletion at first :\n");
       head=deletefirst(head);
       traversal(head);
       return 0;
}