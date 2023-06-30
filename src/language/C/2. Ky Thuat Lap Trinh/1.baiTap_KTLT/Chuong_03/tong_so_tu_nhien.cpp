// Tinh tong cac so tu nhien le
#include <bits/stdc++.h>

int t(int n)
{
    if (n == 0) return 0;
    else
    {
        if (n % 2 == 0) return t(n-1);
        else return n + t(n-1);
    }
}

int main()
{
    int n;
    printf("\n n = "); scanf("%d", &n);
    printf(" Tong cac so tu nhien le <= %d la: %d", n, t(n));
}