#include<stdio.h>
#include<stdlib.h>

#define SIZE 5

struct cq{
	int front,rear;
	int data[SIZE];
};

typedef struct cq CQ;

int isFull(CQ *cq){
	return (cq->rear+1)%SIZE == cq->front;
}

int isEmpty(CQ *cq){
	return cq->front ==-1;
}

void enqueue(CQ *cq, int value){
	
	if(isFull(cq)){
		printf("Full");
		return;
	}
	
	if(cq->front == -1){
		cq->front = 0;
	}else{
		
	}
	cq->rear = (cq->rear+1)%SIZE;
	cq->data[cq->rear] = value;
}

void dequeue(CQ *cq){
	
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
	
	
	return 0;
}
