#include<stdio.h>
#include<stdlib.h>

struct stack 
{
    int size;
    int top;
    int *a;
};

int empty(struct stack* ptr)
{
    if(ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int full(struct stack* ptr)
{
    if(ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    struct stack* s = (struct stack*)malloc(sizeof(struct stack));
    s->size = 10;
    s->top = -1;
    s->a = (int*)malloc(s->size * sizeof(int));
   
    if(empty(s))
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Stack is full\n");
    }

   // free(s->a);  // Free the dynamically allocated memory
   // free(s);    // Free the stack pointer

    return 0;
}
