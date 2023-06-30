#include <bits/stdc++.h>

int S(int n)
{
    if (n / 10 == 0) return 0;
    else if (n % 2 == 0) return n%10 + S(n/10);
    else return S(n/10);
}

int main()
{
    int n;
    printf("\n Nhap so nguyen duong n = "); scanf("%d", &n);
    printf(" Tong cac so chan trong %d la %d", n, S(n));
}