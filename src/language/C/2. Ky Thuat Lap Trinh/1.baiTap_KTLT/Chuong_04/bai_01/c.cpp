#include <bits/stdc++.h> 

float S(int n)
{
    if (n == 0) return 1;
    else return 1.0/(2*n+1) + S(n-1);
}

int main()
{
    int n;
    printf("\n Nhap n = "); scanf("%d", &n);
    printf(" S(%d) = %g", n, S(n));
}