#include <stdio.h>
int funct(int a, int b)
{
    int c;
    a = a + 1;
    b = b - 2;
    c = a * b;
    return c;
}
int main()
{
    int a, b, c;
    a = 5;
    b = 9;
    c = funct(a, b);
    printf("%d", c);
    return 0;
}
