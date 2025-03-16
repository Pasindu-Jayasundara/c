#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 5

struct STACK{
	int top;
	int data[ARRAY_SIZE];
};

int pop(struct STACK* stack){
	
	if(stack->top != -1){
		
		return stack->data[(stack->top)--];
		
	}else{
		printf("\nStack is Empty");
		return -1;
	}
	
}

int peek(struct STACK* stack){
	
	if(stack->top != -1){
		
		return stack->data[stack->top];
		
	}else{
		printf("\nStack is Empty");
		return -1;
	}
	
}

void push(struct STACK* stack,int value){
	
	if(stack->top != ARRAY_SIZE-1){
		
		stack->data[++(stack->top)] = value;
		
	}else{
		printf("\nStack is Full");
	}
	
}

void display(struct STACK stack){
	
	if(stack.top != -1){
		int i=stack.top;
		for(i; i> -1; i--){
			printf("%d ",stack.data[i]);
		}
		
	}else{
		printf("\nStack is Empty");
	}
	
}

int main(){
	
	int choice,pushingValue;
	
	struct STACK stack;
	stack.top = -1;
	
	printf("\n 1. PUSH\n 2. POP\n 3. DISPLAY\n 4. PEEK \n 5. EXIT\n");
	
	do{
		printf("\nWhat You Want To Do ? :");
		scanf("%d",&choice);
		
		switch(choice){
			case 1:{
				printf("\What is the Value: ");
				scanf("%d",&pushingValue);
				printf("\nPushing ...");
				push(&stack,pushingValue);
				printf("\nDone");
				break;
			}
			case 2:{
				int poppedValue = pop(&stack);
                if (poppedValue != -1) {
                    printf("\nPopped value: %d", poppedValue);
                }
				break;
			}
			case 3:{
				printf("\nStack contains : ");
				display(stack);
				break;
			}
			case 4:{
				int peekValue = peek(&stack);
                if (peekValue != -1) {
                    printf("\nPeek value: %d", peekValue);
                }
				break;
			}
			case 5:{
				printf("\nExiting the program ...");
				exit(0);
				break;
			}
			default:{
				printf("\n Invalid Choice ....");
				break;
			}
		}
		
	}while(choice!=5);
	
	return 0;
	
}
