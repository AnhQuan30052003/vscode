/* Viết chương trình  nhập 1 mảng số nguyên có n phần tử (1 ≤ n ≤ 50). Thực hiện các chức năng sau:
a.      Kiểm tra xem mảng có chứa số nguyên tố không?
b.      Kiểm tra xem mảng có gồm toàn số nguyên tố không?
c.      Kiểm tra xem mảng có thứ tự tăng hay không?
d.      Kiểm tra xem mảng có thứ tự giảm hay không?
e.      Tìm vị trí phần tử dương nhỏ nhất.
f.      Vị trí số nguyên tố đầu tiên trong mảng nếu có.
*/
#include <stdio.h>
#include <conio.h>

//nhap mang
void nhapMang(int a[], int &n)
{
    printf("\nSo phan tu trong mang (1 <= n <= 50): ");
    do{
        scanf("%d", &n);  
    } while (!(n >= 1 && n <= 50) && printf("\nNhap sai dieu kien!. Hay nhap lai: "));
    //tao mang
    for (int i=1; i<=n; i++)
    {
        printf("a[%d]:\t", i); scanf("%d", &a[i]);  
    }
}
//ham ktra so nguyen to
int soNguyenTo(int x)
{
    int dem = 0;
    for (int i=2; i<x; i++)
        if (x % i == 0)
        {
            dem++;
            break;
        }
    if (dem == 0)   return 1;
    else            return 0;
}
//cau a
void ktraSoNguyenTo(int a[], int n)
{
    int ktra = 0;
    for (int i=1; i<=n; i++)
    {
        if (soNguyenTo(a[i]))
        {
            printf("\n-Trong mang co so nguyen to");
            ktra++;
            break;
        }
    }
    if (ktra == 0)
        printf("\n-Trong mang KHONG co so nguyen to!");  
}
//cau b
void ktraSoNguyenToToanMang(int a[], int n)
{
    int ktra = 0;
    for (int i=1; i<=n; i++)
    {
        if (soNguyenTo(a[i]) == 0)
        {
            printf("\n-Mang KHONG hoan toan la so nguyen to!"); 
            ktra++;
            break;
        }
    }
    if (ktra == 0)
        printf("\n-Trong mang hoan toan la so nguyen to"); 
}
//cau c
void ktraTang(int a[], int n)
{
    int ktra = 0;
    for (int i=1; i<=n; i++)
    {
        if (i == n)
            break;
        if (a[i] > a[i+1])
        {
            printf("\n-Mang KHONG tang dan!");  
            ktra++;
            break;
        }
    }
    if (ktra == 0)
        printf("\n-Mang tang dan");
}
//cau d
void ktraGiam(int a[], int n)
{
    int ktra = 0;
    for (int i=1; i<=n; i++)
    {
        if (i == n)
            break;
        if (a[i] < a[i+1])
        {
            printf("\n-Mang KHONG giam dan!");  
            ktra++;
            break;
        }
    }
    if (ktra == 0)
        printf("\n-Mang giam dan"); 
}
//cau e
void ViTriPhanTuDuongNhoNhat(int a[], int n)
{
    int duongMin = 0;
    for (int i=1; i<=n; i++) //tim bat ky 1 so duong nao
    {
        if (a[i] > 0)
        {
            duongMin = a[i]; 
            break;
        }
    }
    if (duongMin > 0)
    {
        for (int i=1; i<=n; i++) //tim so duong nho nhat
            if (a[i] > 0 && a[i < duongMin])
                    duongMin = a[i]; 
        printf("\n-Vi tri phan tu duong nho nhat la: ");
        for (int i=1; i<=n; i++)
            if (a[i] == duongMin)
                printf("a[%d] ", i); 
    }
    else
        printf("\n-Trong mang KHONG co so duong!"); 
}
//cau f
void viTriSoNguyenToDauTien(int a[], int n)
{
    int ktra = 0;
    for (int i=1; i<=n; i++)
    {
        if (soNguyenTo(a[i]))
        {
            printf("\n-Vi tri so nguyen to dau tien la: a[%d]", i);
            ktra++;
            break;
        }
    }
    if (ktra == 0)
        printf("\n-vi tri so nguyen to dau tien KHONG ton tai!"); 
}

int main()
{
    int a[100], n;
    nhapMang(a, n); getch();
    ktraSoNguyenTo(a, n); getch();
    ktraSoNguyenToToanMang(a, n); getch();
    ktraTang(a, n); getch();
    ktraGiam(a, n); getch();
    ViTriPhanTuDuongNhoNhat(a, n); getch();
    viTriSoNguyenToDauTien(a, n); getch();
}