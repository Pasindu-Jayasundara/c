#include<stdio.h>
#include<stdlib.h>

#define SIZE 5

struct stack{
	int top;
	int data[SIZE];
};

typedef struct stack ST;

void display(ST st){
	
	if(st.top==-1){
		printf("Empty");
	}else{
		
		int i = SIZE-1;
		for(i;i>-1;i--){
			printf("%d",st.data[i]);
		}
		
	}
}

int isFull(ST *st){
	return st->top == SIZE-1;
}

int isEmpty(ST *st){
	return st->top==-1;
}

int peek(ST st){
	
	if(st.top==-1){
		return -1;
	}else{
		
		return st.data[st.top];
	}
}

void push(ST *st,int value){
	
	if(isFull(st)){
		printf("Full");
	}else{
		
		st->data[++(st->top)] = value;
		if(st->top==-1){
			(st->top)++;
		}
		
	}
}

int pop(ST *st){
	
	if(isEmpty(st)){
		return -1;
	}else{
		int value =st->data[st->top];
		
		if(st->top==SIZE-1){
			st->top=-1;
		}else{
			(st->top)++;
		}
		
		return value;
	}
}

int main(){
		
	ST st;
	st.top=-1;
	
	return 0;
}
