#include <stdio.h>
#include<stdlib.h>
#define MAXSIZE 8

//queue size ¾Ë ¶§
typedef struct queue {
	int item[MAXSIZE];
	int front;
	int rear;
	int count;
}queue;

void create(queue* q) {
	q->front = 0;
	q->rear = 0;
	q->count = 0;
}

int isEmpty(queue* q) {
	int empty = 0;
	if (q->count == 0)
		empty = 1;

	return empty;
}
void enqueue(queue* q, int n_item) {
	if (q->count == MAXSIZE - 1)
		printf("it's full\n");
	else{
		q->count++;
		q->item[q->rear] = n_item;
		q->rear = (q->rear + 1) % MAXSIZE;
		printf("enqueue : %d\n", n_item);
	}
}
int dequeue(queue* q) {
	int value;
	if (!isEmpty(q)) {
		value = q->item[q->front];
		q->front = (q->front + 1) % MAXSIZE;
		q->count--;
		return value;
	}		
}
int peek(queue* q) {
	if (!isEmpty(q)) 
		return q->item[q->front];
}

int main() {
	queue q1;
	create(&q1);

	printf("isEmpty : %d\n", isEmpty(&q1));
	enqueue(&q1,5);
	printf("peek: %d\n", peek(&q1));
	enqueue(&q1,4);
	printf("dequeue : %d\n", dequeue(&q1));
	printf("isEmpty : %d\n", isEmpty(&q1));
	printf("dequeue : %d\n", dequeue(&q1));
	printf("isEmpty : %d\n", isEmpty(&q1));
}
