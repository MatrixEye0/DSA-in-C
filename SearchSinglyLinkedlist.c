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
struct node *search(struct node *head,int s)
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
       head=search(head,106);
      
       
       return 0;
}

