#include<stdio.h>
#include<stdlib.h>

struct queue
{
    int front, rear;
    int capacity;
    int* arr;
};

struct queue* createQueue(int cap)
{
    struct queue* que = (struct queue*)malloc(sizeof(struct queue));
    que->front = 0;
    que->rear = 0;
    que->capacity = cap;
    que->arr = (int*)malloc(cap * sizeof(int)); 
    return que;
}

struct queue* enqueue(struct queue* ptr, int data)
{
    if(ptr->rear == ptr->capacity)
    {
        printf("Queue Full: \n");
        return ptr;
    }

    else
    {
        ptr->rear++;
        ptr->arr[ptr->rear] = data;
        return ptr;
    }
}

struct queue* dequeue(struct queue* ptr)
{
    if(ptr->front == ptr->rear)
    {
        printf("Empty queue: \n");
        return ptr;
    }

    else
    {
        ptr->front++;
        return ptr;
    }
}

void displayQueue(struct queue* ptr)
{
    int tempf = ptr->front;
    while(tempf != ptr->rear)
    {
        printf("%d ",ptr->arr[tempf]);
        tempf++;
    }
}

int main()
{
    struct queue* que = createQueue(50);
    enqueue(que, 10);
    enqueue(que, 20);
    enqueue(que, 30);
    enqueue(que, 40);
    enqueue(que, 50);
    enqueue(que, 60);
    displayQueue(que);


}