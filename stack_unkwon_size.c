#include <stdio.h>
#include<stdlib.h>

//stack 최대 size 모를 때
//create



typedef struct stack {
	int* arr;
	int capacity;
	int top_index;

}stack;

void create(stack* stack) {
	stack->capacity = 2;
	stack->top_index = -1;
	stack->arr = (int*)malloc(sizeof(int) * (stack->capacity));
}

int isEmpty(stack* stack) {
	if (stack->top_index == -1)
		return 1;
	else
		return 0;
}

void  push(stack* stack, int value){
	stack->top_index++;
	if (stack->top_index == stack->capacity - 1) {
		stack->capacity = stack->capacity * 2;
		stack->arr= realloc(stack->arr, sizeof(int) * stack->capacity);
		stack->arr[stack->top_index] = value;
	}
	else	{
		stack->arr[stack->top_index] = value;
	}
}

int top(stack* stack) {
	if (!isEmpty(stack))
		return stack->arr[stack->top_index];
}

int  pop(stack* stack) {
	int value;
	if (!isEmpty(stack)) {
		value=stack->arr[stack->top_index];
		stack->top_index--;
		return value;
	}
}

int main() {
	stack st1;
	scanf_s("%d", &st1.capacity);
	create(&st1);

	printf("isEmpty : %d\n", isEmpty(&st1));
	push(&st1,5);
	printf("top : %d\n", top(&st1));
	push(& st1,4);
	printf("pop : %d\n", pop(&st1));
	printf("isEmpty : %d\n", isEmpty(&st1));
	printf("pop : %d\n", pop(&st1));
	printf("isEmpty : %d\n", isEmpty(&st1));
}
