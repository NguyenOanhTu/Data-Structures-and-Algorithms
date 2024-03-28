#include <stdio.h>
struct Node
{
    int data;
    struct Node *link;
};
int main()
{
    struct Node p;
    p.data = 9;
    p.link = NULL;
    struct Node q;
    q.data = 10;
    q.link = &p;

    struct Node r;
    r.data = 3;
    r.link = &q;
    struct Node k;
    k.data = 7;
    k.link = &r;

    printf("Data of node is %d", r.link->link->data);

    return 0;
}
