#include <bits/stdc++.h>

float S(float x, int n)
{
    if (n == 1) return x;
    else return pow(x,n) + S(x, n-1);
}

int main()
{
    int n;
    float x;
    printf("\n Nhap x = "); scanf("%f", &x);
    printf(" Nhap n = "); scanf("%d", &n);
    printf(" S(%d) = %g", n, S(x, n));
}