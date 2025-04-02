#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data; 
    struct Node* next;
}Node, *NodePtr;

NodePtr createNode(int data);
NodePtr addAtTail(NodePtr head, int data);
NodePtr swapNode(NodePtr head);
void display(NodePtr head);

int main(){
    NodePtr head=NULL;
    int size,data;
    printf("Enter size of linked list: ");
    scanf("%d", &size);
    
    for(int i=0;i<size;i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &data);
        head= addAtTail(head,data);
    }
    
    printf("Original linked list: ");
    display(head);
    head = swapNode(head);
    printf("\nUpdated linked list: ");
    display(head);
    
    return 0;
}

NodePtr createNode(int data){
    NodePtr newNode= (NodePtr)malloc(sizeof(Node));
    newNode->data=data;
    newNode->next=NULL;
    return newNode;
}

NodePtr addAtTail(NodePtr head, int data){
    NodePtr node=createNode(data);
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


NodePtr swapNode(NodePtr head){
    if(head == NULL || head->next == NULL) return head; // No swap needed
    
    NodePtr newHead = head->next; // New head after swap
    NodePtr prev = NULL;
    NodePtr curr = head;
    
    while(curr != NULL && curr->next != NULL){
        NodePtr nextNode = curr->next;
        curr->next = nextNode->next;
        nextNode->next = curr;
        
        if(prev != NULL) prev->next = nextNode;
        
        prev = curr;
        curr = curr->next;
    }
    
    return newHead;
}



void display(NodePtr head){
    NodePtr iter=head;
    while(iter!=NULL){
        printf("%d ", iter->data);
        iter=iter->next;
    }
}