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


struct node *search(struct node*head,int s)
{
    struct node*ptr=head;
    int p=1;
    while(ptr->next!=NULL)
    {
        if(ptr->data==s)
        {
           printf("Element %d\n",s);    
           printf("Element found at %d\n",p);
           printf("Yess... Found it.");
           return head;
        }
        ptr=ptr->next;
        p++;
    }
    printf("Element %d\n",s);
    printf("Not found in this Singly linked list\n");
    printf("Sorry....");
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
       printf("Doubly Linked list before Search element :\n");
       traversal(head);
       head=search(head,106);
       return 0;
}