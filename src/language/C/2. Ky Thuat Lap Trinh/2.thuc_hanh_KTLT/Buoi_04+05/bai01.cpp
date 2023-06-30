//Bài 1: Hãy liệt kê tất cả các chỉnh hợp lặp chập k của n số tự nhiên liên tiếp (1,2,…,n).
#include <bits/stdc++.h>

int n, k;
int a[50];

void in_kq()
{
    printf("\n");
    for (int i = 0; i < k; i++)
        printf("%2d", a[i]);
}

void thu(int vt)
{
    for (int i = 1; i <= n; i++)
    {
        a[vt] = i;
        if (vt < k-1) thu(vt+1);
        else in_kq();
    }
}

int main()
{
    printf("\n Nhap n = "); scanf("%d", &n);
    printf(" Nhap k = "); scanf("%d", &k);
    thu(0);
}