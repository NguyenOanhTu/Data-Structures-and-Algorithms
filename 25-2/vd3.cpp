#include <stdio.h>

int main()
{
    int a, b, c;
    a = 5;
    b = 9;
    c = 10;
    int *p;
    int *t;
    int *k;
    int *q;
    p = &a;
    q = &b;
    t = &c;
    a = a + 1;
    b = a + b;
    *p = *q + b;
    k = p;
    p = q;
    q = k;
    *q = a + *t;
    *t = *p + *q;

    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    return 0;
}
