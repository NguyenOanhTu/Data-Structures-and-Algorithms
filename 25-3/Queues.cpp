#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;
int count = 0;
void Enqueue(int val)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = val;
    newNode->next = NULL;

    if (count == 0)
        front = newNode;
    else
        rear->next = newNode;

    rear = newNode;
    count++;
}
int Dequeue()
{
    if (count == 0)
        printf("Queue is Empty\n");
    else
    {
        struct node *temp;
        int rtdata = front->data;
        temp = front;
        if (count == 1)
            rear = NULL;
        front = front->next;
        free(temp);
        count--;
        return rtdata;
    }
    return 0;
}
void printQueue()
{
    struct node *temp = front;
    printf("Front: ");
    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
void clear()
{
    while (count > 0)
    {
        struct node *temp;
        temp = front;
        if (count == 1)
            rear = NULL;
        front = front->next;
        free(temp);
        count--;
    }
}

int main()
{
    Enqueue(10);
    Enqueue(20);
    Enqueue(30);
    printQueue();
    Dequeue();
    printQueue();

    Dequeue();
    printQueue();
    clear();
    printQueue();

    return 0;
}
