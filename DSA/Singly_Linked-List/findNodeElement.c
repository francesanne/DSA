#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;
}Node, *NodePtr;

NodePtr createNode(int data);
NodePtr addAtTail(NodePtr head, int data);
int searchArray(NodePtr head, int element);

int main(){
    NodePtr head= NULL;
    int size,data;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    printf("Enter the elements of the array: ");
    for(int i=0;i<size;i++){
        scanf("%d", &data);
        head=addAtTail(head,data);
    }
    
    int element;
    printf("Enter the element to search for: ");
    scanf("%d", &element);
    
    if(searchArray(head, element) == 1){
     printf("Element found in the array"); 
    }else{
        printf("Element not found in the array");
    }
    
    return 0;
}


NodePtr createNode(int data){
    NodePtr newNode= (NodePtr)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next=NULL;
    return newNode;
}

NodePtr addAtTail(NodePtr head, int data){
    NodePtr node = createNode(data);
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

int searchArray(NodePtr head, int element){
    NodePtr iter=head;
    while(iter!=NULL){
        if(iter->data==element){
            return 1;
        }
        iter=iter->next;
    }
    return 0;
}