#include<stdio.h>
#include<stdlib.h>

#define SIZE 5

struct queue{
	int front,rear;
	int data[SIZE];
};

typedef struct queue Q;

int isFull(Q *q){
	return q->rear = SIZE-1;
}

int isEmpty(Q *q){
	return q->front ==-1;
}

void dequeue(Q *q){
	
	if(isEmpty(q)){
		printf("Empty");
		return;
	}
	
	printf("%d",q->data[q->front]);
	
	if(q->front == q->rear){
		q->front = -1;
		q->rear = -1;
	}else{
		(q->front)++;
	}
}

void enqueue(Q *q, int value){
	
	if(isFull(q)){
		printf("Full");
		return;
	}
	
	q->data[++(q->rear)] = value;
}

void display(Q *q){
	
	if(isEmpty(q)){
		printf("Empty");
		return;
	}
	
	int i = q->front;
	for(i;i<=q->rear;i++){
		printf("%d",q->data[i]);
	}
	
}

int main(){
	
	Q q;
	q.front = -1;
	q.rear = -1;
	
	
	return 0;
}
