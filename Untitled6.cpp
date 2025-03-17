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
		printf("\nEmpty");
	}else{
		int i = q.front;
		for(i;i!=q.rear;i=((i+1)%SIZE)){
			printf("%d ",q.data[i]);
		}
	}
	
}

void enqueue(Q *q,int value){
	
	if((q->rear+1)%SIZE == q->front){
		printf("Full");
	}else{
		q->data[(q->rear+1)%SIZE] = value;
		
		if(q->front==-1){
			(q->front)++;
		}
	}
	
}

void dequeue(Q *q){
	
	if(q->front == -1){
		printf("Empty");
	}else{
		
		printf("%d",q->data[q->front]);
		
		if(q->front == q->rear){
			q->front=-1;
			q->rear=-1;
		}else{
			q->front = (q->front+1)%SIZE;
		}
		
	}
	
}

int peek(Q q){
	
	if(q.front!=-1){
		
		return q.data[q.front];
		
	}else{
		return -1;
	}
	
}

int isFull(Q q){
	
	return (q.rear+1)%SIZE == q.front;
}

int isEmpty(Q q){
	
	return q.front==-1;
}

int main(){
	
	Q q;
	q.front=-1;
	q.rear=-1;
	
	return 0;
}
