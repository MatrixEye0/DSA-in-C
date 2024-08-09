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

int push(struct stack* ptr, int val)
{
    if(full(ptr))
    {
        printf("Stack overflow\n");
        return 1;
    }
    ptr->top++;
    ptr->a[ptr->top] = val;
}

int pop(struct stack* ptr)
{
    if(empty(ptr))
    {
        printf("Stack underflow\n");
        return -1;
    }
    else
    {
        int val = ptr->a[ptr->top];
        ptr->top--;
        return val;
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

    printf("%d\n", full(s));
    printf("%d\n", empty(s));
    push(s, 44);
    push(s, 54);
    push(s, 74);
    push(s, 94);
    push(s, 34);
    push(s, 42);
    push(s, 56);
    push(s, 78);
    push(s, 90);
    push(s,4646);
    printf("After push:\n");
    printf("%d\n", full(s));
    printf("%d\n", empty(s));
   // printf("Pushed %d from stack :\n", push(s,val));
    printf("Poped %d from stack :\n", pop(s));
    pop(s);

    return 0;
}
