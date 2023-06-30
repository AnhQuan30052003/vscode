// Cho mảng một chiều chứ n số thực. Viết hàm đệ qui tìm vị trí của giá trị lớn nhất có trong mảng
#include <bits/stdc++.h>

float a[100];
int n, max;

inline void nhap_mang(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%f", &a[i]);
    }
}

int max_mang(int max, int i, float a[])
{
    if (i == n) return max;
    else if (a[i] > a[i+1]) return max_mang(max=a[i], i+1, a);
    else return max_mang(max, i+1, a);
}

inline int vi_tri_max_trong_mang(float max, int i, float a[])
{
    if (i == n) return 0;
    else if (a[i] != max) return vi_tri_max_trong_mang(max, i+1, a);
    else
    {
        printf("a[%d] ", i);
        return vi_tri_max_trong_mang(max, i+1, a);
    }
}

int main()
{
    printf("\n Nhap so phan tu mang n = "); scanf("%d", &n);
    nhap_mang(n);

    max = max_mang(a[0], 0, a);
    printf("\n Vi tri phan tu lon nhat trong mang a[] la: ");
    vi_tri_max_trong_mang(max, 0, a);
}