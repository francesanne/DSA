#ifndef STACK_H
#define STACK_H

#include "node.h"

// define stack structs and methods here
typedef struct Stack{
    NodePtr top;
    int size;
}Stack, *StackPtr;

StackPtr createStack();
void push (StackPtr stack, int val);
int pop(StackPtr stack);
int peek (StackPtr stack);
int isEmpty(StackPtr stack);
void displayStack(StackPtr stack);


#endif