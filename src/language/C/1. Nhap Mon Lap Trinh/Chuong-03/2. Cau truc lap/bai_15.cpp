// Nhập một số nguyên dương n (n > 0). Sau đó thực hiện các yêu cầu sau:
#include <stdio.h>
#include <conio.h>

//a. Kiểm tra n có phải là số chính phương không? (bình phương của 1 số)
int soChinhPhuong(int n)
{
    int dem = 0, x;
        for (int i=1; i<=n; i++)
        {
            if (i*i==n)
            {
                x = i;
                dem++;
            }
        }
            if (dem!=0) printf("\n%d la so chinh phuong. Va la binh phuong cua %d", n, x); 
            else printf("\n%d KHONG phai la so chinh phuong!", n); 
    return 0;
}

//b. Kiểm tra n có phải là số nguyên tố không?
int soNguyenTo(int n)
{
    int dem = 0;
        for (int i=2; i<=n; i++)
        {
            if (n % i == 0) dem++;
        }
        if (dem==1) printf("\n%d la so nguyen to.", n);
        else printf("\n%d KHONG phai so nguyen to!");  
    return 0;
}

//c. Kiểm tra n có là số hoàn hảo không?
int SoHoanThien(int n)
{
    int x, tong = 1;
        for (int i=2; i<n; i++)
        {
            if (n % i == 0)
            {
                x = i;
                tong += x;
            }
        }
            if (tong == n) printf("\n%d la so hoan thien."); 
            else printf("\n%d KHONG phai la so hoan thien!"); 
    return 0;
}

int main()
{
    int n;
    printf("\nNhap n > 0: ");
    scanf("%d", &n);
    soChinhPhuong(n);
    soNguyenTo(n);
    SoHoanThien(n);
}