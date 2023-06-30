#include <bits/stdc++.h>

float t(int k, int n)
{
    if (k == n) return sqrt(n);
    else return sqrt(k + t(k+1, n));
}

int main()
{
    int n;
    printf("\n Nhap n = "); scanf("%d", &n);
    printf(" Ket qua t(%d) la: %g", n, t(1,n));
}