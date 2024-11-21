#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "QueueH.h"

struct node
{
	Item data;
	struct node* next;
};

struct Queue_type
{
	struct node* front;
	struct node* rear;
	int size;
};

void terminate(const char* message) 
{
	printf("%s\n\n", message);
	exit(EXIT_FAILURE);
}

int get_size(queue q) {
	return q->size;
}

queue create()
{
	queue q = (queue)malloc(sizeof(struct Queue_type));

	if (q == NULL) {
		terminate("Error");
	}
	q->front = NULL;
	q->rear = NULL;
	int size = 0;

	return q;

}

bool is_empty(queue q)
{
	return q->front == NULL;
}

void destroy(queue q)
{
	make_empty(q);
	free(q);
}

void make_empty(queue q)
{
	while (!is_empty(q))
		dequeue(q);
	q->size = 0;
}

void enqueue(queue q, Item i)
{
	struct node* new_node = (struct node*)malloc(sizeof(struct node));

	if (new_node == NULL)
		terminate("Error");

	new_node->data = i;
	new_node->next = NULL;

	if (q->front == NULL) {
		q->front = new_node;
		q->rear = new_node;
	}
	else {
		q->rear->next = new_node;
		q->rear = new_node;
	}

	q->size++;
}

Item dequeue(queue q)
{
	struct node* old_front;
	Item i;

	if (!is_empty(q)) 
		terminate("Error");

	old_front = q->front;
	i = old_front->data;
	q->front = old_front->next;

	if (q->front = NULL)
		q->rear = NULL;

	free(old_front);
	q->size--;

	return i;
}

Item peek(queue q) {
	if (!is_empty(q))
		terminate("Error: queue is empty. 4");
	return q->front->data;
}

void print_queue(queue q)
{
	struct node* tmp = q->front;

	for (int i = 0; i < q->size; i++) {
		printf("%d", tmp->data);
		tmp = tmp->next;
	}
	printf("\n");
}

int main()
{
	queue q = create();
	enqueue(q, 1);
	enqueue(q, 2);
	enqueue(q, 3);
	print_queue(q);

	printf("queue :");
	print_queue(q);

	printf("dequeue : %d", dequeue(q));
	print_queue(q);

	return 0;

}

