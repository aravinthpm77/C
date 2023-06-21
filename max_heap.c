#include <stdio.h>

#define MAX_SIZE 100

int heap[MAX_SIZE];
int heapSize;

int getParent(int i) {
    return (i-1)/2;
}


void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void insert(int data) {
    if(heapSize == MAX_SIZE) {
        printf("Error: Heap is full\n");
        return;
    }

    heapSize++;
    int i = heapSize - 1;
    heap[i] = data;

    while(i != 0 && heap[getParent(i)] < heap[i]) {
        swap(&heap[i], &heap[getParent(i)]);
        i = getParent(i);
    }
}

int getMax() {
    return heap[0];
}

int getMin(){
    int min = heap[0];
    for(int i = 1; i < heapSize; i++){
        if(heap[i] < min)
            min = heap[i];
    }
    return min;
}

void main() {
    heapSize = 0;
    insert(3);
    insert(4);
    insert(9);
    insert(5);
    insert(1);
    insert(2);

    printf("Maximum element is: %d\n", getMax());
    printf("Minimum element is: %d\n", getMin());

    
}