#include<stdio.h>
#include<stdlib.h>

#define SIZE 5

struct circularQueue{
	int front,rear;
	int data[SIZE];
};

typedef struct circularQueue CQ;

int isFull(CQ *cq){
	return (cq->rear+1)%SIZE == cq->front;
}

int isEmpty(CQ *cq){
	return cq->front == -1;
}

void display(CQ *cq){
	
	if(isEmpty(cq)){
		printf("Empty");
		return;
	}
	
	int i = cq->front;
	for(i;i!=cq->rear;i=((i+1)%SIZE)){
		printf("%d ",cq->data[i]);
	}
	printf("%d ",cq->data[i]);
}

void enqueue(CQ *cq,int value){
	
	if(isFull(cq)){
		printf("Full");
		return;
	}
	
	if (isEmpty(cq)) {  
        cq->front = 0;
    }
	cq->rear = (cq->rear + 1) % SIZE;
    cq->data[cq->rear] = value;
}

void dequeue(CQ *cq){
	
	if(isEmpty(cq)){
		printf("Empty");
		return;
	}
	
	printf("%d",cq->data[cq->front]);
	
	if(cq->front == cq->rear){
		cq->front = -1;
		cq->rear = -1;
	}else{
		cq->front = (cq->front+1)%SIZE;
	}
}

void peek(CQ *cq){
	
	if(isEmpty(cq)){
		printf("Empty");
		return;
	}
	
	printf("%d",cq->data[cq->front]);
}

int main(){
	
	CQ cq;
	cq.front = -1;
	cq.rear = -1;
	
	enqueue(&cq, 10);
    enqueue(&cq, 20);
    enqueue(&cq, 30);
    enqueue(&cq, 40);
    enqueue(&cq, 50);  // This should be full
    enqueue(&cq, 100);

    display(&cq);

    dequeue(&cq);
    dequeue(&cq);

    display(&cq);

    enqueue(&cq, 60);
    enqueue(&cq, 70);

    display(&cq);
	
	return 0;
}
