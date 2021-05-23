#include <stdio.h>
#include<stdlib.h>
#define MAXSIZE 8

//stack 최대 size 알 때
// 
//create
int stack[MAXSIZE];
int top_index = -1;

int isEmpty() {
	if (top_index == -1)
		return 1;
	else
		return 0;
}

void  push(int value){
	if (top_index == MAXSIZE-1)
		printf("it's full\n");
	else	{
		top_index++;
		stack[top_index] = value;
	}
}
//What I missed, top() pop() int 형 리턴
int top() {
	if (!isEmpty())
		return stack[top_index];
}

int  pop() {
	int value;
	if (!isEmpty()) {
		value=stack[top_index];
		top_index--;
		return value;
	}
}

int main() {

	printf("isEmpty : %d\n", isEmpty());
	push(5);
	printf("top : %d\n", top());
	push(4);
	printf("pop : %d\n", pop());
	printf("isEmpty : %d\n", isEmpty());
	printf("pop : %d\n", pop());
	printf("isEmpty : %d\n", isEmpty());
}
