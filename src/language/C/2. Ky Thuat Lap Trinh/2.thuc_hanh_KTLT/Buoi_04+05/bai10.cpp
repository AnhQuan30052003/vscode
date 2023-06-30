// Phan tich so
#include <bits/stdc++.h>

int n;
int a[50];
int tong = 0;
int dem = 0;

void in_kq()
{
    if (tong == n)
    {
        int sai = 0;
        for (int i = 0; i < n-1; i++)
            for (int j = i+1; j < n; j++)
                if (a[i] < a[j]) sai++;

        if (sai == 0)
        {
            dem++;
            printf("\n %d =", n);
            for (int i = 0; i < n; i++)
                if (a[i] != 0) printf("%2d", a[i]);
        }
    }
}

void thu(int vt)
{
    for (int i = 1; i <= n; i++)
    {
        a[vt] = i;
        tong += a[vt];
        if ((vt < n-1) && (tong < n)) thu(vt+1);
        else in_kq();
        tong -= a[vt];
        a[vt] = 0;
    }
}

int main()
{
    printf("\n Nhap n = "); scanf("%d", &n);
    thu(0);
    printf("\n-> Voi n = %d thi co %d cach phan tich:", n, dem);
}
