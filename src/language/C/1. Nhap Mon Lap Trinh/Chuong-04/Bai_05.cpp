#include <stdio.h>
#include <conio.h>

//nhap n
void nhapN(int &n)
{
    printf("\nNhap so nguyen duong n: ");
    do{
        scanf("%d", &n); 
    } while (!(n > 0) && printf("\nNhap n khong thoa! Hay nhap lai: "));
}
//a. Trả về số đảo của số n.
void soDao(int n)
{
    printf("\nSo dao cua %d la: ", n); 
    while (n > 0)
    {
        printf("%d", n%10);
        n /= 10; 
    }
}
//b. Kiểm tra n có phải là số đối xứng.
void soDoiXung(int n)
{
    int x, so, tong;
    for (so=n, tong=0; n!=0; n/=10)
    {
        x = n % 10;
        tong = tong*10 + x;
    }
    if (so == tong)
        printf("\n%d la so doi xung", so);
    else
        printf("\n%d khong phai so doi xung!", so);  
}
//c. Kiểm tra n có phải là số chính phương.
void soChinhPhuong(int n)
{
    int i, ktra;
    for (i=1, ktra=0; i<=n; i++)
        if (i*i == n)
            ktra++;
    if (ktra != 0)
        printf("\n%d la so chinh phuong", n);
    else 
        printf("\n%d khong phai so chinh phuong!", n);  
}
//d. Kiểm tra n có phải là số nguyên tố.
void soNguyenTo(int n)
{
    int i, ktra;
    for (i=2, ktra=0; i<=n; i++)
        if (n % i == 0)
            ktra++;
    if (ktra == 1)
        printf("\n%d la so nguyen to", n);
    else 
        printf("\n%d khong phai so nguyen to!", n);  
}
//e. Tính tổng các chữ số lẻ xuất hiện trong n.
void tongSoLe(int n)
{
    int tong, m, x;
    for (m=n, tong=0; n>0; n/=10)
    {
        x = n % 10;
        if (x % 2 == 1)
            tong += x;
    }
    printf("\nTong so le trong %d la %d", m, tong); 
}
//f.  Kiểm tra các chữ số trong n có tăng dần. Ví dụ: n = 2467 có chữ số tăng dần.
void ktraTangDan(int n)
{
    int max, x, m, tang, giam;
    for (max=n%10, m=n, tang=giam=0; n>0; n/=10)
    {
        x = n % 10;
        if (x < max)
        {
            max = x; tang++;
        }
        else if (x > max)
        {
            max = x; giam++;
        }
    }
    if (tang!=0)
        if (giam!=0)
            printf("\nCac so trong %d vua tang, vua giam", m);
        else
            printf("\nCac so trong %d tang dan", m);
    else //tang==0
        if  (giam!=0)
            printf("\nCac so trong %d giam dan",m);
        else 
            printf("\nCac so trong %d khong tang, khong giam", m);
}

int main()
{
    int n;
    nhapN(n);
    soDao(n); getch();
    soDoiXung(n); getch();
    soChinhPhuong(n); getch();
    soNguyenTo(n); getch();
    tongSoLe(n); getch();
    ktraTangDan(n); getch();
}