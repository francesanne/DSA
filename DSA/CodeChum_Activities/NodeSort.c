#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;
}Node, *NodePtr;

NodePtr createNode(int data);
NodePtr addAtTail(NodePtr head, int data);
NodePtr sortLinkedList(NodePtr head);
void display(NodePtr head);


int main(){
    NodePtr head=NULL;
    int size, data;
    printf("Enter size of linked list: ");
    scanf("%d", &size);
    
    for(int i=0;i<size;i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &data);
        head=addAtTail(head, data);
    }
    
    printf("Original linked list: ");
    display(head);
    
    
    head=sortLinkedList(head);
    
    printf("\nSorted linked list: ");
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
    NodePtr node = createNode(data);
    if(head==NULL){
        head=node;
    }else{
        NodePtr iter = head;
        while(iter->next!=NULL){
            iter=iter->next;
        }
        iter->next=node;
    }
    return head;
}

NodePtr sortLinkedList(NodePtr head){
      if (head == NULL || head->next == NULL) return head; // No sorting needed
    
    int swapped;
    NodePtr ptr1;
    NodePtr lastPtr = NULL; // Marks the last sorted node
    
    do {
        swapped = 0;
        ptr1 = head;
        
        while (ptr1->next != lastPtr) {
            if (ptr1->data > ptr1->next->data) {
                // Swap data
                int temp = ptr1->data;
                ptr1->data = ptr1->next->data;
                ptr1->next->data = temp;
                swapped = 1;
            }
            ptr1 = ptr1->next;
        }
        lastPtr = ptr1; // Move the last sorted node
    } while (swapped);
    
    return head;
    
}

void display(NodePtr head){
    NodePtr iter = head;
        while(iter!=NULL){
            printf("%d ", iter->data);
            iter=iter->next;
        }
}