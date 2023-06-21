#include <stdio.h>

#define SIZE 5

int items[SIZE];
int front = -1, rear = -1;

// Check if the queue is full
int isFull() {
  if ((front == rear + 1) || (front == 0 && rear == SIZE - 1)) {
    return 1;}
  else{
    return 0;}
}

// Check if the queue is empty
int isEmpty() {
  if (front == -1){ return 1;}
  else{return 0;}
}

// Adding an element
void enQueue(int element) {
  if (isFull())
    printf("\n Queue is full!! \n");
  else {
    if (front == -1){
      front = 0;
    }
    rear = (rear + 1) % SIZE;
    items[rear] = element;
    printf("\n Inserted -> %d", element);
  }
}

// Removing an element
void dequeue(){
  int element;
  if (isEmpty()){
    printf("Queue is Empty");
  }
  else{
    element=items[front];
    if(front==rear){
      rear=-1;
      front=-1;

    }
    else{
      front=(front+1)%SIZE;
    }
    printf("\n Deleted  -> %d \n",element);

  }
}

void display(){
  int i;
  if(isEmpty()){
    printf("Queue is Empty");
  }
  else{
    printf("\n Front-> %d \n",front);
    printf("\n Rear -> %d \n",rear);
    for (i = front; i != rear; i = (i + 1) % SIZE){
      printf("%d  ",items[i]);
    }
  }
}

int main() {
  // Fails because front = -1


  enQueue(1);
  enQueue(2);
  enQueue(3);
  enQueue(4);
  enQueue(5);
  dequeue();
  display();
  enQueue(7);
  dequeue();
  dequeue();
  display();
  

  // Fails to enqueue because front == rear + 1
  enQueue(8);
  
  enQueue(19);

  return 0;
}