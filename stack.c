#include <stdio.h>
#include <stdlib.h>

struct StackNode {
    int data;
    struct StackNode* next;
};

struct Stack {
    struct StackNode* top;
};

struct Stack* createStack() {
    struct Stack* stack = malloc(sizeof(struct Stack));
    stack->top = NULL;
    return stack;
}

int isEmpty(struct Stack* stack) {
    return stack->top == NULL;
}

void push(struct Stack* stack, int data) {
    struct StackNode* newNode = malloc(sizeof(struct StackNode));
    newNode->data = data;
    newNode->next = stack->top;
    stack->top = newNode;
    printf("%d pushed to stack\n", data);
}

int pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow\n");
        return -1;
    }
    struct StackNode* temp = stack->top;
    int poppedData = temp->data;
    stack->top = stack->top->next;
    free(temp);
    return poppedData;
}

int peek(struct Stack* stack) {
    return isEmpty(stack) ? -1 : stack->top->data;
}

void freeStack(struct Stack* stack) {
    while (!isEmpty(stack)) pop(stack);
    free(stack);
}

int main() {
    struct Stack* stack = createStack();
    int choice, data;

    do {
        printf("1. Push\n2. Pop\n3. Peek\n4. Exit\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter an integer: ");
                scanf("%d", &data);
                push(stack, data);
                break;
            case 2:
                printf("%d popped from stack\n", pop(stack));
                break;
            case 3:
                printf("Top element is %d\n", peek(stack));
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 4);

    freeStack(stack);
    return 0;
}
