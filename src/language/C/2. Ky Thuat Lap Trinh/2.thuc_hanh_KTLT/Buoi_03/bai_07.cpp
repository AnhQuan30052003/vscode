//Bài 7: Tính S(n)=1^2+2^2+3^2+....+n^2 với n>0
#include <bits/stdc++.h>

int S(int n)
{
    if (n == 1) return 1;
    else return pow(n,2) + S(n-1);
}

int main()
{
    int n;
    printf("\n Nhap n = "); scanf("%d", &n);
    printf(" S(%d) = %d", n, S(n));
}