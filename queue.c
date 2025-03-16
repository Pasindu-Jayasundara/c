#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 5

struct queue{
	int front,rear;
	int data[ARRAY_SIZE];
};

typedef struct queue QUEUE;

void dequeue(QUEUE *queue);
void enqueue(QUEUE *queue,int value);
void display(QUEUE queue);


int main(){
	
	QUEUE queue;
	queue.front = -1;
	queue.rear = -1;
	
	int choice,pushingValue;
	
	printf("\n 1. DEQUEUE\n 2. ENQUEUE\n 3. DISPLAY\n 4. EXIT\n");
	
	do{
		printf("\nWhat You Want To Do ? :");
		scanf("%d",&choice);
		
		switch(choice){
			case 1:{
				dequeue(&queue);
				printf("\nDone");
				break;
			}
			case 2:{
				printf("\What is the Value: ");
				scanf("%d",&pushingValue);
				enqueue(&queue,pushingValue);
				printf("\nDone");
				break;
			}
			case 3:{
				printf("\nQueue contains : ");
				display(queue);
				break;
			}
			case 4:{
				printf("\nExiting the program ...");
				exit(0);
			}
			default:{
				printf("\n Invalid Choice ....");
				break;
			}
		}
		
	}while(choice!=4);
	
	
	return 0;
}

void dequeue(QUEUE *queue){
	
	if(queue->front == -1){
		printf("\n Queue is Empty");
	}else{
		
		printf("\n Deleted value : %d",queue->data[queue->front]);

		if(queue->front == queue->rear){
			queue->front = -1;
			queue->rear = -1;
		}else{
			(queue->front)++;
		}
		
	}
	
}

void enqueue(QUEUE *queue,int value){
	
	if(queue->rear == ARRAY_SIZE-1){
		printf("\n Queue is Full");
	}else{
		
		queue->data[++(queue->rear)] = value;
		if(queue->front == -1){
			(queue->front)++;
		}
		
	}
	
}

void display(QUEUE queue){
	
	if(queue.front == -1){
		printf("\n Queue is Empty");		
	}else{
		
		int i = queue.front;
		for(i;i<=queue.rear;i++){
			printf("%d ",queue.data[i]);
		}
		
	}
	
}
