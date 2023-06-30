// Tim so nguyen to thu n la bao nhieu torng day cac so nguyen to
#include <bits/stdc++.h>

void in_snt(int n)
{
    int dem;
    for (int i = 2; i <= n*n; i++)
    {
        dem = 0;
        for (int j = 1; j <= i; j++)
            if (i % j == 0) dem++;
        if (dem == 2) printf("%3d", i);
    }
}

int snt(int n)
{
    int dem, dem_vt = 0;
    for (int i = 2; i <= n*n; i++)
    {
        dem = 0;
        for (int j = 1; j <= i; j++)
            if (i % j == 0) dem++;
        if (dem == 2) dem_vt++;
        if (dem_vt == n)
            return i;
    }
    return 0;
}

int main()
{
    int n;
    printf("\n Nhap so nguyen duong n = "); scanf("%d", &n);
    in_snt(n);
    printf("\n So nguyen to thu %d la %d", n, snt(n));
}