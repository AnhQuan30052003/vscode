/*Viết chương trình nhập một mảng số nguyên có n phần tử (1 ≤ n ≤ 50). Thực hiện các chức năng sau:
a.    Đếm số phần tử chẵn trong mảng.
b.   Tính tổng các phần tử lẻ trong mảng.
c.    Trung bình cộng của mảng.
d.   Tính tổng các phần tử trong mảng là số nguyên tố.
e.   Có bao nhiêu phần tử trong mảng chia hết cho 4 nhưng không chia hết cho 5?
f.    Sắp xếp mảng giảm dần.
*/
#include <stdio.h> 
#include <conio.h>

void nhapMang(int a[], int &n)
{
    printf("\nSo phan tu mang (1 <= n <= 50): ");
    do{
        scanf("%d", &n);  
    } while (!(n >= 1 && n <= 50) && printf("\nNhap sai dieu kien!. Hay nhap lai: "));
    //In mang
    for (int i=1; i<=n; i++)    
    {
        printf("a[%d]:\t", i); scanf("%d", &a[i]);  
    }
}
void demSoChan(int a[], int n)
{
    int dem = 0;
    for (int i=1; i<=n; i++)
        if (a[i] % 2 == 0)
            dem++;
    printf("\n-Co %d phan tu la so chan", dem); 
}
void tongPhanTuLe(int a[], int n)
{
    int tong = 0;
    for (int i=1; i<=n; i++)
        if (a[i] % 2 == 1 || a[i] % 2 == -1)
            tong += a[i];
    printf("\n-Tong cac phan tu le la: %d", tong); 
}
void trungBinhCong(int a[], int n)
{
    float tong = 0;
    for (int i=1; i<=n; i++)
        tong += a[i];
    printf("\n-Trung binh cong cac so trong mang = %g", (float) tong/n); 
}
void tongSoNguyenTo(int a[], int n)
{
    int tong = 0, dem;
    for (int i=1; i<=n; i++)
    {
        dem = 0;
        for (int j=2; j<=a[i]; j++)
            if (a[i] % j == 0)
                dem++;
        if (dem == 1)
            tong += a[i];
    }
    printf("\n-Tong cac so nguyen to trong mang la: %d", tong); 
}
void chia4_5(int a[], int n)
{
    int dem = 0;
    for (int i=1; i<=n; i++)
        if (a[i] % 4 == 0 && a[i] % 5 != 0)
            dem++;
    printf("\n-Co %d phan tu chia het cho 4, nhung khong chia het cho 5", dem); 
}
void giamDan(int a[], int n)
{   
    for(int i=1; i<n; i++) 
        for(int j=i+1; j<=n; j++) 
              if (a[i] < a[j]) 
              {
                   int x = a[i]; 
                   a[i] = a[j]; 
                   a[j] = x; 
              }
    printf("\nSap xep giam dan: ");
    for (int i=1; i<=n; i++)
        printf("%d ", a[i]); 
}

int main()
{
    int a[100], n;
    nhapMang(a, n); getch();
    demSoChan(a, n); getch();
    tongPhanTuLe(a, n); getch();
    trungBinhCong(a, n); getch();
    tongSoNguyenTo(a, n); getch();
    chia4_5(a, n); getch();
    giamDan(a, n); getch();
}