#include <stdio.h>
#include <stdlib.h>
#define STACK_OVERRFLOW -101
#define STACK_UNDERFLOW -101
#define MAXSIZE 100

typedef struct {
	int masive[MAXSIZE];
	int size;
} Stack;
void Init(Stack * stack) {
    stack->masive = malloc(sizeof(int));
	stack->size = 0;
}
void push(Stack * stack, int value) {

	if ( stack->size <= MAXSIZE ) {
        stack->masive=realloc(stack->masive, (stack->size + 1) * sizeof(int));
		stack->masive[stack->size] = value;
		stack->size++;
	} else {
		exit(STACK_OVERRFLOW);
	}

}
void pop(Stack * stack)
{
	if (stack->size > 0) {
        stack->masive = realloc(stack->masive, (stack->size - 1) * sizeof(int));
		stack->size--;
		stack->masive[stack->size] = 0;
	} else {
		exit(STACK_UNDERFLOW);
	}
}
int Top(Stack * stack) {
	if (stack->size > 0)
		return stack->masive[stack->size - 1];
	else
		exit(STACK_UNDERFLOW);
}
int Empty(Stack * stack) {
	if (stack->size > 0)
		return 0;
	else
		return 1;
}
void print(Stack * stack) {
	if (stack->size > 0) {
		int i = 0;

		for (i = 0; i < stack->size; i++) {
			printf("%d element = %d\n", (i + 1), stack->masive[i]);
		}

	} else {
		printf("Stack is Empty\n");
	}
}
int main() {
	Stack *stack = (Stack*)malloc(sizeof(Stack));
	Init(stack);

	push(stack, 15);
	push(stack, 13);
	push(stack, 18);
	push(stack, 19);
	pop(stack);
	print(stack);

	return 0;
}
