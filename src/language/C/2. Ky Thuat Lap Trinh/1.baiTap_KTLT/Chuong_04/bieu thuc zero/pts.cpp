// Code phan tich so
#include <bits/stdc++.h>

int n;
int so[50];

void kiem_tra()
{
    int tong = 0;
    for (int i = 0; i < n; i++)
    {
        tong += so[i];
        if (tong > n) break;
    }

    if (tong == n)
    {
        printf("\n %d = ", n);
        for (int i = 0; i < n; i++)
            if (so[i] != 0)  printf("%2d", so[i]);
    }
}

void thu(int vt)
{
    for (int i = 0; i <= n; i++)
    {
        so[vt] = i;
        if (vt == n-1) kiem_tra();
        else thu(vt+1);
        so[vt] = 0;
    }
}

int main()
{
    printf("\n Nhap n = "); scanf("%d", &n);
    thu(0);
}