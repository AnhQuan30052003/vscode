// Cho mảng một chiều chứ n số thực và số thực k. Viết hàm đệ qui tính tổng các giá trị lớn hơn giá trị k có trong mảng
#include <bits/stdc++.h>

float a[100], k;
int n;

void nhap_mang(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%f", &a[i]);
    }
}

float T(int i, float a[])
{
    if (i == n) return 0;
    else if (a[i] > k) return a[i] + T(i+1,a);
    else return T(i+1,a);
}

int main()
{
    printf("\n Nhap so phan tu n = "); scanf("%d", &n);
    nhap_mang(n);
    printf(" Nhap so thuc k = "); scanf("%f", &k);
    printf(" Tong cac phan tu co gia tri > %g co trong mang %c[] la: %g", k, 'a', T(0,a));
}