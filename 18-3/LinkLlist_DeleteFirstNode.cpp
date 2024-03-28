#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *link;
};
struct Node *head = NULL;
int count = 0;
void insertNode(int val)
{

    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->link = head;
    head = newNode;
    count++;
}
void deleteNode(struct Node *pPre, struct Node *pNode)
{

    if (pNode != NULL)
    {
        if (pPre == NULL)
        { // muon xoa Node dau tien
            head = head->link;
        }
        else
        {
            pPre->link = pNode->link;
        }
        free(pNode);
        count--;
    }
}
int main()
{
    insertNode(6);
    insertNode(9);
    insertNode(7);
    insertNode(20);
    insertNode(1);

    deleteNode(head->link, head->link->link);

    printf("Data is %d", head->link->link->data);

    return 0;
}
