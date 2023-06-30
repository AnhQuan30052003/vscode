/*
Bài 6: Hãy liệt kê tất các chuỗi nhị phân có chiều dài là n theo thứ tự từ điển.
Hai chuỗi nhị phân chiều dài n được gọi là khác nhau nếu tồn tại ít nhất một vị trí i (1 ≤ i ≤ n) mà có giá trị 0 ở chuỗi này và có giá 1 ở chuỗi kia.
Note: in dãy nhị phân có chiều dài n
*/
#include <bits/stdc++.h>

int n;
int np[50];

void in_kq()
{
    printf("\n");
    for (int i = 0; i < n; i++)
        printf("%2d", np[i]);
}

void thu(int vt)
{
    for (int i = 0; i <= 1; i++)
    {
        np[vt] = i;
        if (vt < n-1) thu(vt+1);
        else in_kq();
        np[vt] = 0;
    }
}

main()
{
    printf("\n Nhap n = "); scanf("%d", &n);
    thu(0);
}