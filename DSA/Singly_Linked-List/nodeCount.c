#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;
}Node, *NodePtr;

NodePtr createNode(int data);
NodePtr addAtHead(NodePtr head, int data);
int countNode(NodePtr head);


int main(){
    NodePtr head=NULL;
    int element=0;
    do{
        printf("Enter element (enter 0 to stop): ");
        scanf("%d", &element);
        if(element!=0){
            head=addAtHead(head,element);
        }
    }while(element!=0);
    
    printf("Number of nodes: %d", countNode(head));
    return 0;
}

NodePtr createNode(int data){
    NodePtr newNode = (NodePtr)malloc(sizeof(Node));
    newNode->data=data;
    newNode->next=NULL;
    return newNode;
}

NodePtr addAtHead(NodePtr head, int data){
    NodePtr node = createNode(data);
    node->next=head;
    head=node;
    return node;
}

int countNode(NodePtr head){
    int count=0;
    NodePtr iter=head;
    while(iter!=NULL){
        count++;
        iter=iter->next;
    }
    return count;
}




