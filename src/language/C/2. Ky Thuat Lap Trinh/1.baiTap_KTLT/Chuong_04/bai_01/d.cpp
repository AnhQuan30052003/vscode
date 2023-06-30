#include <bits/stdc++.h>

float S(int n)
{
    if (n == 2) return 0.5;
    else return 1.0/(n*(n-1)) + S(n-1);
}

int main()
{
    int n;
    printf("\n Nhap (n > =2): "); scanf("%d", &n);
    printf(" S(%d) = %g", n, S(n));
}