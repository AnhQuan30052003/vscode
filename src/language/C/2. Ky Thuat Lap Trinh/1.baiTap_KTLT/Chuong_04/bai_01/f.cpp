#include <bits/stdc++.h>

int t(int n)
{
    if (n == 1) return 1;
    else return n + t(n-1);
}

float S(int n)
{
    if (n == 1) return 1;
    else return 1.0/t(n) + S(n-1);
}

int main()
{
    int n;
    printf("\n Nhap (n > 0): "); scanf("%d", &n);
    printf(" S(%d) = %g", n, S(n));
}