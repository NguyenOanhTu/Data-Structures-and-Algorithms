#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *link;
};
struct Node *head = NULL;
int count = 0;
struct Node *search(int val)
{
    struct Node *temp = head;
    while (temp != NULL && temp->data != val)
    {
        temp = temp->link;
    }

    return temp;
}
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
// them vao
void printList(){
	struct Node *temp = head;
	printf("Head->");
	while(temp != NULL){
		printf("%d->",temp->data);
		temp = temp->link;
	}
	printf("NULL");
}

int main()
{
    insertNode(6);
    insertNode(9);
    insertNode(7);
    insertNode(15);
    insertNode(20);
    insertNode(1);

    deleteNode(head, head->link);
    
    struct Node *s = search(15);
    insertNode(s->data);
  
    printList();
    
    return 0;
}
