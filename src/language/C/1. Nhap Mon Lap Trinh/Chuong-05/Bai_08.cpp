/*Viết chương trình nhập một mảng số nguyên a có tối đa 100 phần tử. Thực hiện các chức năng sau:
a.      Tính trung bình cộng các số dương trong mảng
b.      Cho biết số lần xuất hiện trong mảng của các phần tử bằng với phần tử thứ nhất
c.      Thay các số lẻ trong mảng bằng 2 lần giá trị cũ của nó
d.      Kiểm tra xem mảng có đang xen kẽ số âm và số dương hay không?
*/
#include <stdio.h>
#include <conio.h>

void nhapMang(int a[], int &na)
{
    printf("\nSo phan tu trong mang (1 <= n <= 50): ");
    do{
        scanf("%d", &na);  
    } while (!(na >= 1 && na <= 100) && printf("\nNhap sai dieu kien!. Hay nhap lai: "));
    //tao mang
    for (int i=1; i<=na; i++)
    {
        printf("a[%d]:\t", i);
        scanf("%d", &a[i]);  
    }
}
//cau a
void tbc(int a[], int n)
{
    int tong = 0, demDuong = 0, demAm = 0;
    for (int i=1; i<=n; i++)
    {
        if (a[i] > 0)
        {
            tong+=a[i];
            demDuong++;
        }
        else
            demAm++;
    }
    if (demAm == n)
        printf("\n-Trong mang KHONG co so duong!");
    else 
        printf("\n-Trung binh cong so duong = %g", (float) tong/demDuong); 
}
//cau b
void xuatHienPhanTuDauTien(int a[], int n)
{
    int dem = 0;
    for (int i=1; i<=n; i++)
        if (a[i] == a[1])
            dem++;
    printf("\n-Co %d lan xuat hien phan tu dau tien", dem); 
}
//cau c
void thaySo(int a[], int n)
{
    int demChan = 0;
    for (int i=1; i<=n; i++)
    {
        if (a[i] % 2 != 0)
            a[i] = 2*a[i];
        else
            demChan++;
    }
    if (demChan == n)
        printf("\n-Trong mang KHONG co so le!"); 
    else
    {
        printf("\nSau khi thay cac so le bang hai lan gia tri bang ban dau cua chung:"); getch();
        for (int i=1; i<=n; i++)
            printf("\na[%d]:\t%d", i, a[i]); 
    }
}
//cau d
void ktraXenKe(int a[], int n)
{
    int ktra = 0;
    for (int i=1; i<=n; i++)
    {
        if ( !(a[i]*a[i+1] < 0) ) 
        {
            printf("\n-Cac so trong mang KHONG xem ke am duong vs nhau!");
            ktra++; 
            break;
        }
    }
    if (ktra == 0)
        printf("\n-Cac so trong mang xen ke am duong vs nhau"); 
}

int main()
{
    int a[100], n;
    nhapMang(a, n); getch();
    tbc(a, n); getch();
    xuatHienPhanTuDauTien(a, n); getch();
    thaySo(a, n); getch();
    ktraXenKe(a, n); getch();
}