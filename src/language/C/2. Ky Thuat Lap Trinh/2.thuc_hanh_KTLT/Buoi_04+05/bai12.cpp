/*
Câu 12: Cho k chữ số 1, 2, 3, ..., k (1 ≤ k ≤ 9), hãy liệt kê các chuỗi k-phân có chiều dài n theo thứ tự từ điển (xem ví dụ để hiểu rõ hơn chuỗi k-phân).
Dữ liệu nhập:
- Gồm hai số nguyên k và n cách nhau 1 khoảng trắng (1 ≤ k ≤ 9, 1 ≤ n ≤ 6)
Dữ liệu xuất:
- Dòng đầu tiên là một số nguyên m - số lượng chuỗi k-phân tính được.
- Trong m dòng tiếp theo, mỗi dòng là một chuỗi k-phân, các dòng sắp theo thứ tự từ điển.
(thật tế nó là chỉnh hợp lặp mà thôi)
*/
#include <bits/stdc++.h>

int n, k;
int a[50];

void nhap()
{
    do { printf("\n Nhap n va k = "); scanf("%d%d", &n, &k); }
    while ( !((k >= 1 && k <= 9) && (n >= 1 && n <= 6)) );
}

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
    nhap();
    int max = pow(n,k);
    printf("\n %d", max);
    thu(0);
}