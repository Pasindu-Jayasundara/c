#include<stdio.h>
#include<stdlib.h>

#define SIZE 5

struct linearStack{
	int front,rear;
	int data[SIZE];
};

typedef struct linearStack LS;

int isFull(LS *ls){
	return ls->rear == SIZE-1;
}

int isEmpty(LS *ls){
	return ls->front == -1;
}

void display(LS *ls){
	
	if(isEmpty(ls)){
		printf("Empty");
		return;
	}
	
	int i = ls->front;
	for(i; i<= ls->rear; i++){
		printf("%d ",ls->data[i]);
	}
}

void peek(LS *ls){
	
	if(isEmpty(ls)){
		printf("Empty");
		return;
	}
	
	printf("%d",ls->data[ls->front]);
}

void enqueue(LS *ls,int item){
	
	if(isFull(ls)){
		printf("Full");
		return;
	}
	
	ls->data[++(ls->rear)] = item;
}

void dequeue(LS *ls){
	
	if(isEmpty(ls)){
		printf("Empty");
		return;
	}
	
	printf("%d",ls->data[(ls->front)++]);
}

int main(){
	
	LS ls;
	ls.front = -1;
	ls.rear = -1;
	
	
	return 0;
}

