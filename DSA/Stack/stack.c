#include "stack.h"
#include "node.h"
#include <stdio.h>
#include <stdlib.h>

// Implement stack methods here

StackPtr createStack(){
    StackPtr stack = (StackPtr)malloc(sizeof(Stack));
    stack->top=NULL;
    stack->size=0;
    return stack;
}
void push (StackPtr stack, int val){
    if(stack==NULL){
        return;
    }
    stack->top=addAtHead(stack->top,val);
    stack->size++;
}
int pop(StackPtr stack){
    if(stack==NULL){
        return -1;
    }
    int result = stack->top->val;
    stack->top=deleteAtHead(stack->top);
    stack->size--;
    return result;
}
int peek (StackPtr stack){
    if(stack==NULL){
        return -1;
    }
    return stack->top->val;
}
int isEmpty(StackPtr stack){
    if(stack==NULL){
        return -1;
    }
    return stack->size==0;
}
void displayStack(StackPtr stack){
    if(stack==NULL || isEmpty(stack)){
        printf("Stack size: %d\n",stack->size );
        printf("Stack content: NULL\n");
        return;
    }
    printf("Stack size: %d\n",stack->size );
        printf("Stack content: ");
    displayList(stack->top);
}