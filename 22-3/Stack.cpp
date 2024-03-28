#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};

struct node *top = NULL;
int count = 0;
void push(int val){
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = val;
    newNode->next = top;

    top = newNode;
    count++;
}
int pop(){
    if(top == NULL)
        printf("Stack is empty\n");
    else
    {
	    struct node *temp;
        int rtdata = top->data;
        temp = top;
        top = top->next;
        free(temp);
	    count--;
        return rtdata;
    }
    return 0;
}
void clear(){
    while(top !=NULL){
        struct node *temp = top;
        top = top->next;
        free(temp);
    }
    count = 0;
}
void printStack(){
    struct node *temp = top;
    printf("Top->");
    while(temp !=NULL){
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main()
{
    push(12);
    push(11);
    push(5);
    push(7);
    push(3);
    printStack();
    pop();
    pop();
    printStack();
    clear();
    printStack();
    return 0;
}
