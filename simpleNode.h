struct Node{
	int data;
	struct Node *next;
};

struct Node* getNewNode(int data){
	struct Node* currentNode = (struct Node*) malloc(sizeof(struct Node*));
	currentNode->data = data;
	currentNode->next = NULL;
	printf("current node address: %d\n", currentNode);
	return currentNode;
}