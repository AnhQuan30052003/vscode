// Bài 7: Liệt kê các dòng toàn âm trong 1 ma trận n x m các số thực.
#include <bits/stdc++.h>

float a[3][3]
{
    -1,-2,-3,
    -3, -4, -5,
     7, 8, 9
};

void in_dong(int dong)
{
    for (int cot = 0; cot < 3; cot++)
        printf("%5g", a[dong][cot]);
}

void ktra(float a[3][3])
{
    int dem, ktra = 0;
    for (int d = 0; d < 3; d++)
    {
        dem = 0;
        for (int c = 0; c < 3; c++)
            if (a[d][c] < 0) dem++;
        if (dem == 3)
        {
            ktra++;
            in_dong(d);
            printf("\n");
        }
    }
    if (ktra == 0) printf("\n Trong mang khong co dong nao toan am !");
}

int main()
{
    ktra(a);
}