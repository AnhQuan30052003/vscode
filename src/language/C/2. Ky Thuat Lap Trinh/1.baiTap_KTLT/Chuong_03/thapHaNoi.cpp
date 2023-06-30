#include <bits/stdc++.h>

void HN(int n, char vt1, char vt2, char vt3)
{
    if (n == 1) printf("\n%c -> %c", vt1, vt2);
    else
    {
        HN(n-1, vt1, vt3, vt2);
        printf("\n %c -> %c", vt1, vt2);
        HN(n-1, vt3, vt2, vt1);
    }
}

int main()
{
    int n;
    printf("\n Nhap n = "); scanf("%d", &n);
    HN(n, 'A', 'B', 'C');
}