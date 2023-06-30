//Bài 5: Tính lũy thừa N của số X.
#include <bits/stdc++.h>

int x, n;

int luy_thua(int x, int n)
{
    if (n == 1) return x;
    else return x*luy_thua(x, n-1);
}

int main()
{
    printf("\n Nhap x va n = "); scanf("%d%d", &x, &n);
    printf(" pow(%d, %d) = %d", x, n, luy_thua(x,n));
}