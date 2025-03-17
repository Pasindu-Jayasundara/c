#include<stdio.h>
#include<stdlib.h>

#define SIZE 5

struct stack{
	int top;
	int data[SIZE];
};

typedef struct stack ST;

int isFull(ST *st){
	return st->top == SIZE-1;
}
int isEmpty(ST *st){
	return st->top == -1;
}
void display(ST *st){
	
	if(isEmpty(st)){
		printf("Empty");
		return;
	}
	
	int i = st->top;
	for(i;i>-1;i--){
		printf("%d ",st->data[i]);
	}
}
void push(ST *st, int item){
	
	if(isFull(st)){
		printf("Full");
		return;
	}
	
	st->data[++(st->top)] = item;
}

void pop(ST *st){
	
	if(isEmpty(st)){
		printf("Empty");
		return;
	}
	
	printf("%d",st->data[(st->top)--]);
	
}

void peek(ST *st){
	
	if(isEmpty(st)){
		printf("Empty");
		return;
	}
	
	printf("%d",st->data[st->top]);
}

int main(){
	
	ST st;
	st.top = -1;
	
	
	return 0;
}
