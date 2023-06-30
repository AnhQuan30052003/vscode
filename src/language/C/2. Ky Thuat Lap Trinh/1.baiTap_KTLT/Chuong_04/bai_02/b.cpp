// Cho mảng chứa n số thực. Viết hàm đệ qui tính tổng các giá trị duong trong mảng
#include <bits/stdc++.h>

float a[] = {-1, -2, -5, -10};
int size = sizeof(a) / sizeof(a[0]); // Tìm kích thước của mang, (trong trường hợp nay thì size = 4).

float T(int k, float a[])
{
    if (k == size) return 0;
    else if (a[k] > 0) return a[k] + T(k+1,a);
    else return T(k+1,a);
}

int main()
{
    printf("\n Tong cac gia tri duong trong mang a[] la %g", T(0,a));
}