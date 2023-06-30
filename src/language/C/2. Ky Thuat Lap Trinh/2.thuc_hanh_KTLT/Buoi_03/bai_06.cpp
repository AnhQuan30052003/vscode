//Bài 6: Tính S(n) = 1 + 1/2 + 1/3 + ... + 1/n với n>0
#include <bits/stdc++.h>

int n;

float S(int n)
{
    if (n == 1) return 1;
    else return 1.0/n + S(n-1);
}

int main()
{
    printf("\n Nhap so nguyen duong n = "); scanf("%d", &n);
    printf(" S(%d) = %g", n, S(n));
}