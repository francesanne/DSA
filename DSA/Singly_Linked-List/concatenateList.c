#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;
}Node, *NodePtr;


NodePtr createNode(int data);
NodePtr addAtTail(NodePtr head, int data);
void display(NodePtr head);
NodePtr concatSll(NodePtr head1, NodePtr head2);



int main(){
    NodePtr head1=NULL, head2=NULL;
    int size1,size2;
    
    printf("Enter size of linked list 1: ");
    scanf("%d", &size1);
    for(int i=0;i<size1;i++){
        int data;
        printf("Enter element %d: ", i+1);
        scanf("%d", &data);
        head1 = addAtTail(head1, data);
    }
    
    
    printf("Enter size of linked list 2: ");
    scanf("%d", &size2);
    for(int i=0;i<size2;i++){
        int data;
        printf("Enter element %d: ", i+1);
        scanf("%d", &data);
        head2 = addAtTail(head2, data);
    }
    printf("Linked list 1: ");
    display(head1);
    printf("Linked list 2: ");
    display(head2);
    
    printf("Concatenated linked list: ");
    NodePtr newList = concatSll(head1,head2);
    display(newList);
    
    return 0;
}

NodePtr createNode(int data){
    NodePtr newNode = (NodePtr)malloc(sizeof(Node));
    newNode->data=data;
    newNode->next=NULL;
    return newNode;
}

NodePtr addAtTail(NodePtr head, int data){
    NodePtr node= createNode(data);
    if(head==NULL){
        head=node;
    }else{
        NodePtr iter= head;
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
        printf("%d ", iter->data);
        iter=iter->next;
    }
    printf("\n");
}

NodePtr concatSll(NodePtr head1, NodePtr head2){
    NodePtr newList;
    
    if(head1==NULL){
        return head2;
    }
    
    if(head2==NULL){
        return head1;
    }
    
    
    newList=head1;
    
    while(head1->next!=NULL){
        head1=head1->next;
    }
    head1->next=head2;
    return newList;
}