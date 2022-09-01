#include <stdio.h>
#include <stdlib.h>

// A structure to represent a stack
typedef struct {
    int top;
    unsigned int capacity;
    int * array;
}stack;

// function to create a stack of given capacity. It initializes size of
// stack as 0
stack * create_stack(unsigned int capacity)
{
    stack * new_stack = (stack *) malloc(sizeof(stack));
    new_stack->capacity = capacity;
    new_stack->top = -1;
    new_stack->array = (int*) malloc(capacity * sizeof(int));
    return new_stack;
}

// Stack is full when top is equal to the last index
int isFull(stack * new_stack)
{
    return ((new_stack->top) == (new_stack->capacity-1));
}
  
// Stack is empty when top is equal to -1
int isEmpty(stack * new_stack)
{
    return (new_stack->top == -1);
}

// Function to add an item to stack. It increases top by 1
void push(stack * new_stack, int item)
{
    if (isFull(new_stack)){
        printf("stack is full\n");
        return; //don't push
    }
    new_stack->array[++new_stack->top] = item;
    printf("%d pushed to stack\n", item);
}

// Function to remove an item from stack. It decreases top by 1
int pop(stack * new_stack)
{
    if (isEmpty(new_stack)){
        printf("stack is empty\n");
        return 0; //don't pop, just return 0
    }
    printf("%d poped from stack\n", new_stack->array[new_stack->top]);
    return (new_stack->array[new_stack->top--]);
}

// Function to return the top from stack without removing it
int peek(stack * new_stack)
{
    if (isEmpty(new_stack)){
        return 0;
    }
    return (new_stack->array[new_stack->top]);
}

// Function to print the stack
void print_stack(stack * new_stack)
{
    if (isEmpty(new_stack)){
        printf("stack is empty\n");
        return;
    }
    for(int x=0 ; x<=new_stack->top ; x++){
        printf("%d ", new_stack->array[x]);
    }
    printf("\n");
}

int main() {

    stack * new_stack = create_stack(5);
    
    print_stack(new_stack);
    push(new_stack, 10);
    push(new_stack, 20);
    push(new_stack, 30);
    print_stack(new_stack);
    printf("%d is the peek of stack\n", peek(new_stack));
    push(new_stack, 40);
    push(new_stack, 50);
    push(new_stack, 20);
    print_stack(new_stack);
    printf("%d is the peek of stack\n", peek(new_stack));
    push(new_stack, 30);
    pop(new_stack);
    printf("%d is the peek of stack\n", peek(new_stack));
    pop(new_stack);
    push(new_stack, 60);
    push(new_stack, 70);
    printf("%d is the peek of stack\n", peek(new_stack));
    push(new_stack, 80);
    printf("%d is the peek of stack\n", peek(new_stack));
    print_stack(new_stack);

    return 0;
}