// source file

#include<stdio.h>
#include<stdlib.h>
#include"SLL.h"



NodePtr createNode(int item){
    NodePtr newNode = (NodePtr)malloc(sizeof(Node));
    newNode->item=item;
    newNode->next=NULL;
    return newNode;
}
NodePtr addAtHead(NodePtr head, int item){
    NodePtr node = createNode(item);
    node->next=head;
    head=node;
    return head;
}
NodePtr addAtTail(NodePtr head, int item){
    NodePtr node = createNode(item);
    if(head==NULL){
        head=node;
    }else{
        NodePtr iter=head;
        while(iter->next!=NULL){
            iter=iter->next;
        }
        iter->next=node;
    }
    return head;
}
void display(NodePtr head){
     NodePtr iter=head;
        while(iter!=NULL){
            printf("%d -> ", iter->item);
            iter=iter->next;
        }
    printf("NULL\n");
}