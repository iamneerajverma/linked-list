#include<stdio.h>
#include "simpleList.h"

int generateRandomNumber(int max){
	return rand()%max;
}

int main(){
	int count, max, counter;
	printf("Please Enter no of values in the list:  _-_-_-   ");
	scanf("%d", &count);
	printf("\n\nPlease enter max value range  _-_-_-   ");
	scanf("%d",&max);
	printf("\n\n");
	struct LinkedList* linkedList = getEmptyLinkedList();
	for (counter = 0; counter!= count; counter++){
		addToList(linkedList, generateRandomNumber(max));
	}
	traverse(linkedList);
	return 0;
}
