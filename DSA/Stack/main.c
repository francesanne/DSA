#include <stdio.h>
#include "stack.h"

int getNum();

int main(){
	StackPtr stack = createStack();
	int input;

	do{
	    printf("\n");
		displayStack(stack);

		printf("1.) Push\n");
		printf("2.) Pop\n");
		printf("3.) Peek\n");
		printf("4.) Exit\n");
		printf("Choice: ");
		input = getNum();
		switch(input){
			case 1:
				printf("Item to push: ");
				push(stack, getNum());
				break;
			case 2:
				printf("Popped: %d\n", pop(stack));
				break;
			case 3:
				printf("Peeked: %d\n", peek(stack));
				break;
			case 4:
				printf("Exiting Program...");
				break;
		}
	}while(input != 4);

	return 0;
}

int getNum(){
	int n;
	scanf("%d", &n);
	return n;
}