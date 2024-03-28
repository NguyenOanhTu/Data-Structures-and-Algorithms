#include <stdio.h>
#include <string.h>

struct xemay
{
    int namsanxuat;
    char nhanhieu[10];
    int bienso;
};

int main()
{
    struct xemay xm1;
    xm1.namsanxuat = 2019;
    strcpy(xm1.nhanhieu, "Honda");
    xm1.bienso = 1234;

    printf("Xe may 1 co nhan hieu la %s va bien so la %d", xm1.nhanhieu, xm1.bienso);
    return 0;
}
