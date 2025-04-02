#include "SLL.h"
#include <stdio.h>

int getNum();

int main(){
    NodePtr head;
    int input;

    printf("Enter series of numbers ending with 0\n");
    printf("Positives at Head, Negatives at Tail: ");

    input = getNum();
    while(input != 0){
        if(input > 0) head = addAtHead(head, input);
        else head = addAtTail(head, input);
        input = getNum();
    }

    printf("Result: ");
    display(head);


    return 0;
}

int getNum(){
    int n;
    scanf("%d", &n);
    return n;
}