#include <bits/stdc++.h>

int a[] = {1,2,3,4,5,6,7,8,9};

int size = sizeof(a)/sizeof(a[0]);

int test[50];

int n, tong_khac_yeu_cau = 0;

inline void ktra()
{
    int s = 0;
    for (int k = 0; k < size; k++)
        if (test[k] == 1) s += a[k];
    if (s == n)
    {
        printf("\n");
        for (int k = 0; k < size; k++)
            if (test[k] == 1) printf("%3d", a[k]);
    }   
    else tong_khac_yeu_cau++;
}

void thu(int i)
{
    //trang thai = 0: khong tham gia tinh tong
    //trang thai = 1: tham gia tinh tong
    for (int trang_thai = 0; trang_thai <= 1; trang_thai++)
    {
        test[i] = trang_thai;
        if (i < size-1) thu(i+1);
        else ktra();
        test[i] = 0;
    }
}

int main()
{
    printf("\n Nhap n = "); scanf("%d", &n);

    printf(" Cac so trong mang a[] co tong = %d: \n", n);
    thu(0);

    if (tong_khac_yeu_cau == 512) printf(" Khong co ket qua !");
}