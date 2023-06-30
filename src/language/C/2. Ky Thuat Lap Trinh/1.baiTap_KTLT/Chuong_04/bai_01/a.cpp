#include <bits/stdc++.h>

int S(int n)
{
    if (n == 0) return 0;
    else return n*n + S(n-1);
}

int main()
{
    int n;
    printf("\n n = "); scanf("%d", &n);
    printf(" S(%d) = %d", n, S(n));
}