#include<stdio.h>
#include<stdlib.h>
#include "simpleNode.h"

struct LinkedList{
	int count;
	struct Node* head;
	struct Node* tail;
};


struct LinkedList* getLinkedList(){
	struct LinkedList* linkedList = (struct LinkedList*) malloc(sizeof(struct LinkedList*));
	linkedList->head = NULL;
	linkedList->tail = NULL;
	linkedList->count = 0;
	return linkedList;
}

void initializeList(struct LinkedList* linkedList, int data){
	linkedList->head = getNewNode(data);
	linkedList->tail = linkedList->head;
}

void addToList(struct LinkedList* linkedList, int data){
	if (linkedList->head == NULL){
		initializeList(linkedList, data);
	} else{
		linkedList->tail->next = getNewNode(data);
		linkedList->tail = linkedList->tail->next;
	}
	linkedList->count += 1;
}

void traverse(struct Node* head){
	if (head == NULL){
		printf("Head is null");
	} else {
		struct Node* curr_node = head;
		int count = 0;
		while (curr_node != NULL){
			printf("%d -> ", curr_node->data);
			curr_node = curr_node->next;
			count += 1;
		}
		printf(" X\n");
		printf("Total Records: %d", count);
	}
	printf("\n\n\n");
}

int main(){
	int count = 15;
	int index = 0;
	struct LinkedList* linkedList = getLinkedList();
	while (index < count){
		int value = rand()%1000;
		addToList(linkedList, value);
		index += 1;
		printf("Generated value: %d\n", value);
	}
	printf("%d\n\n", linkedList->count);
	printf("first node:%d\n\n", linkedList->head->data);
	traverse(linkedList->head);
	return 5;
}