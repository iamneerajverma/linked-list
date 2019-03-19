#include<stdio.h>
#include<stdlib.h>
#include "simpleNode.h"

struct LinkedList{
	int count;
	struct Node* head;
	struct Node* tail;
};

struct LinkedList* getEmptyLinkedList(){
	struct LinkedList* linkedList = (struct LinkedList*) malloc(sizeof(struct LinkedList*));
	linkedList->head = NULL;
	linkedList->tail = NULL;
	linkedList->count = 0;
	return linkedList;
}

void initializeList(struct LinkedList* linkedList, int data){
	if (linkedList->head == NULL){
		linkedList->head = getNewNode(data);
		linkedList->tail = linkedList->head;
	} else {
		printf("Head is already initialized\n");
	}
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

void traverse(struct LinkedList* linkedList){
	if (linkedList == NULL){
		printf("Linked List is null\n");
	} else if (linkedList->head == NULL){
		printf("Linked List has no head\n");
	} else {
		struct Node* curr_node = linkedList->head;
		int count = 0;
		while (curr_node != NULL){
			printf("%d ->", curr_node->data);
			curr_node = curr_node->next;
			count += 1;
		}
		printf(" X\n");
		printf("Total Records: %d", count);
		printf("\n\n\n");
	}
}

int main(){
	printf("\n\n");
	int count = 15;
	int index = 0;
	struct LinkedList* linkedList = getEmptyLinkedList();
	while (index < count){
		int value = rand()%1000;
		addToList(linkedList, value);
		index += 1;
	}
	traverse(linkedList);
	return 0;
}

