#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *link;
};

struct Node *head = NULL;
int count = 0;

void insertNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->link = head;

    head = newNode;
}
void deleteNode(struct Node *pPre, struct Node *pNode)
{
    if (pNode != NULL)
    {
        if (pPre == NULL)
        {
            head = pNode->link;
        }
    }
}
int main()
{
    insertNode(9);
    insertNode(15);
    insertNode(10);
    insertNode(7);
    deleteNode(head->link, head->link->link);
    printf("Data of the node is %d", head->link->link->data);

    return 0;
}
