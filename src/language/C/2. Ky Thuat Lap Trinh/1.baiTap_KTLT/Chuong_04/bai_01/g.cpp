#include <bits/stdc++.h>

int gt(int n)
{
    if (n == 1 || n == 0) return 1;
    else return n*gt(n-1);
}

float S(float x, int n)
{
    if (n == 1) return x;
    else return (float) pow(x,n)/gt(n) + S(x,n-1);
}

int main()
{
    int n;
    float x;
    printf("\n Nhap x = "); scanf("%f", &x);
    printf(" Nhap (n >= 1): "); scanf("%d", &n);
    printf(" S(%g,%d) = %g", x, n, S(x,n));
}