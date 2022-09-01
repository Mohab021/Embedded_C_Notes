#include <stdio.h>
#include <stdlib.h>

// A structure to represent a queue
typedef struct {
    int front, rear, size;
    unsigned int capacity;
    int * array;
}queue;

// function to create a queue of given capacity. It initializes size of
// queue as 0
queue * create_queue(unsigned int capacity)
{
    queue * new_queue = (queue *) malloc(sizeof(queue));
    new_queue->capacity = capacity;
    new_queue->front = 0;
    new_queue->size = 0;
    new_queue->rear = capacity - 1;
    new_queue->array = (int*) malloc(capacity * sizeof(int));
    return new_queue;
}

// Queue is full when size is equal to the capacity
int isFull(queue * new_queue)
{
    return ((new_queue->size) == (new_queue->capacity));
}
  
// Queue is empty when size is equal to 0
int isEmpty(queue * new_queue)
{
    return (new_queue->size == 0);
}

// Function to add an item to queue. It changes rear and size
void enqueue(queue * new_queue, int item)
{
    if (isFull(new_queue)){
        printf("queue is full\n");
        return; //don't enqueue
    }
    new_queue->rear = (new_queue->rear + 1) % new_queue->capacity;
    new_queue->array[new_queue->rear] = item;
    new_queue->size = new_queue->size + 1;
    printf("%d enqueued to queue\n", item);
}

// Function to remove an item from queue. It changes front and size
int dequeue(queue * new_queue)
{
    if (isEmpty(new_queue)){
        printf("queue is empty\n");
        return 0; //don't dequeue, just return 0
    }
    int item = new_queue->array[new_queue->front];
    new_queue->front = (new_queue->front + 1) % new_queue->capacity;
    new_queue->size = new_queue->size - 1;
    printf("%d dequeued from queue\n", item);
    return item;
}

// Function to get front of queue
int front(queue * new_queue)
{
    if (isEmpty(new_queue)){
        return 0;
    }
    return (new_queue->array[new_queue->front]);
}
 
// Function to get rear of queue
int rear(queue * new_queue)
{
    if (isEmpty(new_queue)){
        return 0;
    }
    return (new_queue->array[new_queue->rear]);
}

// Function to print the queue
void print_queue(queue * new_queue)
{
    if (isEmpty(new_queue)){
        printf("queue is empty\n");
        return;
    }
    int start=new_queue->front;
    int end=new_queue->rear;

    if(end>=start){
        for(int x=start ; x<=end ; x++){
            printf("%d ", new_queue->array[x]);
        }
    }
    else{
        for(int x=start ; x<new_queue->capacity ; x++){
            printf("%d ", new_queue->array[x]);
        }
        for(int x=0 ; x<=end ; x++){
            printf("%d ", new_queue->array[x]);
        }
    }
    printf("\n");
}

int main() {

    queue * new_queue = create_queue(5);
    
    print_queue(new_queue);
    enqueue(new_queue, 10);
    enqueue(new_queue, 20);
    enqueue(new_queue, 30);
    print_queue(new_queue);
    printf("%d is the front of queue\n", front(new_queue));
    printf("%d is the rear of queue\n", rear(new_queue));
    enqueue(new_queue, 40);
    enqueue(new_queue, 50);
    enqueue(new_queue, 20);
    print_queue(new_queue);
    printf("%d is the front of queue\n", front(new_queue));
    printf("%d is the rear of queue\n", rear(new_queue));
    enqueue(new_queue, 30);
    dequeue(new_queue);
    printf("%d is the front of queue\n", front(new_queue));
    printf("%d is the rear of queue\n", rear(new_queue));
    dequeue(new_queue);
    enqueue(new_queue, 60);
    enqueue(new_queue, 70);
    printf("%d is the front of queue\n", front(new_queue));
    printf("%d is the rear of queue\n", rear(new_queue));
    enqueue(new_queue, 80);
    printf("%d is the front of queue\n", front(new_queue));
    printf("%d is the rear of queue\n", rear(new_queue));
    print_queue(new_queue);

    return 0;
}