#include <stdio.h>
#define MAX 10
int arr[MAX];
int top;
#define TRUE 1
#define FALSE 0
int empty = TRUE;
void push(int x)
{
    if (top == MAX - 1)
    {
        printf("Stack is Full.Cannot Push element %d  Further in the araray  \n", x);
        return;
    }
    arr[++top] = x;
    empty = FALSE;
}

int pop()
{

    int num = arr[top];
    top--;
    return num;
}
void display()
{
    printf("Stack:- ");
    for (int i = 0; i <= top; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}

int main()

{
    int n;
    top = -1;
    push(11);
    push(23);
    push(-8);
    push(14);
    push(20);
    push(21);
    push(2);
    push(-3);
    push(4);
    push(12);
    push(5);
    n = pop();
    if (top <= -1 && empty == TRUE)
    {
        printf("Stack is already empty. Cannot pop\n");
    }
    else
    {

        printf("Item popped %d\n", n);
    }
    n = pop();
    if (top == -1 && empty == TRUE)
    {
        printf("Stack is already empty. Cannot pop\n");
    }
    else
    {

        printf("Item popped %d\n", n);
    }
    n = pop();
    if (top == -1 && empty == TRUE)
    {
        printf("Stack is already empty. Cannot pop\n");
    }
    else
    {

        printf("Item popped %d\n", n);
    }

    display();
    return 0;
}