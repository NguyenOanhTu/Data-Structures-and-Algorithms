#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *link;
};

struct Node *head = NULL;
int count = 0;

void insertNode(int data){
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->link = head;
    
    head = newNode;
}
int main()
{
    insertNode(9);
    insertNode(15);
    insertNode(10);
    insertNode(7);
    
    printf("Data of the node is %d", head->data);

    return 0;
}
