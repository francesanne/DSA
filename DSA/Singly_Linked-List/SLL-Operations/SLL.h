#ifndef sl_h
#define sl_h

struct Node{
    int item;
    struct Node* next;
};

typedef struct Node Node, *NodePtr;


NodePtr createNode(int item);
NodePtr addAtHead(NodePtr head, int item);
NodePtr addAtTail(NodePtr head, int item);
void display(NodePtr head);

#endif