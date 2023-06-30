/*
Viết chương trình có sử dụng hàm, in tất cả những số nguyên tố nhỏ hơn hoặc bằng n (n là số nguyên dương nhập từ bàn phím).
*/
#include <stdio.h>
#include <conio.h>

void nhapN(int &n)
{
    printf("\nNhap so nguyen duong n: ");
    do{
        scanf("%d", &n); 
    } while (!(n > 0) && printf("\nNhap n khoa thoa! Hay nhap lai: "));
}
void soNguyenTo(int n)
{
    int dem;
    for (int i=1; i<=n; i++)
    {
        dem = 0;
        for (int j=1; j<=i; j++)
            if (i % j == 0)
                dem++;
        if (dem == 2)
            printf("%d ", i); 
    }
}

int main()
{
    int n;
    nhapN(n);
    printf("\nCac so nguyen to nho hon hoac bang n la: ");
    soNguyenTo(n);  
}