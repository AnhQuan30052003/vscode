// Su dung nhanh can
#include <bits/stdc++.h>

int a[] = {1,2,3,4,5,6,7,8,9};
int p = 15;
int n = sizeof(a)/sizeof(a[0]);
int trang_thai[50];

void kiem_tra(int tong)
{
    if (tong == p)
    {
        printf("\n");
        for (int i = 0; i < n; i++)
            if (trang_thai[i] == 1) printf("%3d", a[i]);
    }
}

void thu(int vt, int tong)
{
    // Trang thai[] = 0. La khong tham gia tong
    // Trang thai[] = 1. La co tham gia tong
    for (int i = 0; i <= 1; i++)
    {
        trang_thai[vt] = i;
        if (i == 1) tong += a[vt];
        if ( (vt < n-1) && (tong < p) ) thu(vt+1, tong);
        else kiem_tra(tong);
        if (i == 1) tong -= a[vt];
        trang_thai[vt] = 0;
    }
}

int main()
{
    printf("\n Cac so trong mang a[] co tong = %d la:", p);
    thu(0,0);
}