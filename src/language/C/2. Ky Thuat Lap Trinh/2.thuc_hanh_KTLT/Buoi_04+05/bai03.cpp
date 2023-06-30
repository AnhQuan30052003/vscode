/*
Bài 3: Cho tập hợp A gồm n phần tử (n>=1).
Một cách sắp thứ tự n phần tử của tập hợp A được gọi là một hoán vị của n phần tử đó. Hãy liệt kê tất cả các hoán vị của tập A.
*/
#include <bits/stdc++.h>

int a[] = {1,2,3};
int hv[10];
int trang_thai[10];
int n = sizeof(a)/sizeof(a[0]);

void in_kq()
{
    printf("\n");
    for (int i = 0; i < n; i++)
        printf("%2d", hv[i]);
}

void thu(int vt)
{
    for (int i = 0; i < n; i++)
        if (trang_thai[i] == 0)
        {
            hv[vt] = a[i];
            trang_thai[i] = 1;
            if (vt < n-1) thu(vt+1);
            else in_kq();
            trang_thai[i] = 0;
        }
}

int main()
{
    thu(0);
}