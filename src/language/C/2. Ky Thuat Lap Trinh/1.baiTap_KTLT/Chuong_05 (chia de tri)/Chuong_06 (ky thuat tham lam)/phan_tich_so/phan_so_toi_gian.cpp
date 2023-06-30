// Code theo cach thay Thuan!
#include <stdio.h>
#include <math.h>

int main()
{
    int p, q;

    printf("\n Nhap tu so: "); scanf("%d", &p);
    printf(" Nhap mau so: "); scanf("%d", &q);


    float ps = (float) p/q;
    while (ps != 0)
    {
        float ms = (float) q/p;
        int MS = ceil(ms);
        printf(" 1/%d", MS);

        p = p*MS - 1*q;
        q = q*MS;
        ps = (float) p/q;
    }
}