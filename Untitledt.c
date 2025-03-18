#include<stdio.h>
#include<stdlib.h>

#define SIZE 5

struct stack{
	int top;
	int data[SIZE];
};

void display(struct stack* st){
	
	if(isEmpty(st)){
		printf("Empty");
		return;
	}
	
	int i = st->top;
	for(i;i>-1;i--){
		printf("%d",st->data[i]);
	}
}

int isFull(struct stack* st){
	return st->top == SIZE-1;
}

int isEmpty(struct stack* st){
	return st->top == -1;
}

void push(struct stack* st, int value){
	
	if(isFull(st)){
		printf("Full");
		return;
	}
	
	if(st->top ==-1){
		st->top = 0;
	}
	
	st->data[++(st->top)] = value;
}

void pop(struct stack* st){
	
	if(isEmpty(st)){
		printf("Empty");
		return;
	}
	
	printf("%d",st->data[(st->top)--]);
	
}

void peek(struct stack* st){
	
	if(isEmpty(st)){
		printf("Full");
		return;
	}
	
	printf("%d",st->data[st->top]);
}

int main(){
	
	struct stack st;
	st.top =-1;
	
	return 0;
}
