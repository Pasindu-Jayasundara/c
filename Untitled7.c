#include<stdio.h>
#include<stdlib.h>

#define SIZE 5

struct q{
	int front,rear;
	int data[SIZE];
};

typedef struct q Q;

void display(Q q){
	
	if(q.front==-1){
		printf("Empty");
	}else{
		
		int i = q.rear;
		for(i;i<=q.front;i--){
			printf("%d",q.data[i]);
		}
	}
}

int peek(Q q){
	
	if(q.front==-1){
		printf("Empty");
	}else{
		
		return q.data[q.front];
		
	}
	
}

int isFull(Q *q){
	return q->rear == SIZE-1;
}

int isEmpty(Q *q){
	return q.front == -1;
}

void enqueue(Q *q,int value){
	
	if(isFull(q)){
		printf("Full");
	}else{
		
		q->data[++(q->rear)] = value;
		if(q->front==-1){
			(q->front)++;
		}
		
	}
	
}

void dequeue(Q *q){
	
	if(isEmpty(q)){
		printf("Empty");
	}else{
		
		printf("%d",q->data[q->front]);
		
		if(q->front==q->rear){
			q->front=-1;
			q->rear=-1;
		}else{
			(q->front)++;
		}
		
	}
	
}

int main(){
	
	Q q;
	q.front=-1;
	q.rear=-1;
	
	return 0;
}
