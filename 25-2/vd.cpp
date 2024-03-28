#include <stdio.h>

int main()
{
    int a;
    a = 5;
    printf("Address of a: %x\n", &a);
    int *p;
    p = &a;
    printf("Value if p: %x\n", p);
    printf("Value of memory of pointer p: %d\n", *p);
    return 0;
}
