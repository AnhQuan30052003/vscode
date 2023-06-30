//Bài 5: Viết hàm trả về giá trị phần tử nhỏ nhất thuộc ma trận n x m các số thực cho trước
#include <bits/stdc++.h>

int a[3][3]
{
    1,3,4,
    5,4,3,
    5,4,2
};

int min(int a[3][3])
{
    int min = a[0][0];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (a[0][0] < min) min = a[0][0];
    return min;
}

int main()
{
    printf("\n Gia tri nho nhat trong ma tran la: %d", min(a));
}