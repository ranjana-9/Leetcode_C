#include <stdlib.h> 

#define MAX 10

typedef struct {
    int rear, front;
    int *a; 
    int size; // Maximum size of the queue
} MyCircularQueue;

MyCircularQueue* myCircularQueueCreate(int k) {
    MyCircularQueue *obj = (MyCircularQueue *)malloc(sizeof(MyCircularQueue));
    obj->a = (int *)malloc(k * sizeof(int)); 
    obj->front = -1; 
    obj->rear = -1;
    obj->size = k; 
    return obj;
}

bool myCircularQueueIsFull(MyCircularQueue* obj) {
    return ((obj->rear + 1) % obj->size) == obj->front; 
}

bool myCircularQueueIsEmpty(MyCircularQueue* obj) {
    return obj->front == -1; 
}


bool myCircularQueueEnQueue(MyCircularQueue* obj, int value) {
    if (myCircularQueueIsFull(obj)) 
        return false;
    if (myCircularQueueIsEmpty(obj)) 
        obj->front = 0;
    obj->rear = (obj->rear + 1) % obj->size; 
    obj->a[obj->rear] = value; 
    return true;
}

bool myCircularQueueDeQueue(MyCircularQueue* obj) {
    if (myCircularQueueIsEmpty(obj)) 
        return false;
    if (obj->front == obj->rear) 
        obj->front = obj->rear = -1;
    else
        obj->front = (obj->front + 1) % obj->size; 
    return true;
}

int myCircularQueueFront(MyCircularQueue* obj) {
    if (myCircularQueueIsEmpty(obj)) 
        return -1;
    return obj->a[obj->front]; 
}

int myCircularQueueRear(MyCircularQueue* obj) {
    if (myCircularQueueIsEmpty(obj)) 
        return -1;
    return obj->a[obj->rear]; 
}

// Function to free memory allocated for the circular queue
void myCircularQueueFree(MyCircularQueue* obj) {
    free(obj->a); 
    free(obj); 
}


