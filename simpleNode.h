#include<stdlib.h>

struct Node{
	int data;
	struct Node* next;
};

struct Node* getNewNode(int data){
	struct Node* currentNode = (struct Node*) malloc(sizeof(struct Node*));
	currentNode->data = data;
	currentNode->next = NULL;
	return currentNode;
}