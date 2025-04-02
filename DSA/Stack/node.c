#include "node.h"
#include <stdio.h>
#include <stdlib.h>

// implement node methods here


NodePtr createNode(int val){
    NodePtr newNode = (NodePtr)malloc(sizeof(Node));
    newNode->val=val;
    newNode->next=NULL;
    return newNode;
}
NodePtr addAtHead(NodePtr head, int val){
    NodePtr newNode = createNode(val);
    newNode->next=head;
    head=newNode;
    return head;
}
NodePtr deleteAtHead(NodePtr head){
    if(head==NULL)return head;
    NodePtr toReturn = head->next;
    free(head);
    return toReturn;
}
void displayList(NodePtr head){
    NodePtr iterator = head;
    while(iterator!=NULL){
        printf("%d -> ", iterator->val);
        iterator=iterator->next;
    }
    printf("NULL\n");
}