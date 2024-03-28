#include <stdio.h>

int main()
{
    int a, b;
    a = 5;
    b = 9;
    int *p;
    int *q;
    p = &a;
    q = &b;
    a = *p + b;
    *q = *p + b;
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    return 0;
}
