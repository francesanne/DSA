#ifndef NODE_H
#define NODE_H

// define node struct and node methods here

typedef struct Node{
    int val;
    struct Node *next;
}Node, *NodePtr;

NodePtr createNode(int val);
NodePtr addAtHead(NodePtr head, int val);
NodePtr deleteAtHead(NodePtr head);
void displayList(NodePtr head);


#endif