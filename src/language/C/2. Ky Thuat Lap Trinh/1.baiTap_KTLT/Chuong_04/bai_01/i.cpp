#include <bits/stdc++.h>

int dem_so(int n)
{
    if (n / 10 == 0) return 1;
    else return 1 + dem_so(n/10);
}

int main()
{
    int n;
    printf("\n Nhap so nguyen duong n = "); scanf("%d", &n);
    printf(" %d co %d chu so", n, dem_so(n));
}