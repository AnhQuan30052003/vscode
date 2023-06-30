// Viết chương trình nhập 1 mảng số nguyên có n phần tử (1 ≤ n ≤ 50), tính tổng các số dương, tổng các số âm trong mảng.
#include <stdio.h>
#include <conio.h>

void nhapMang(int a[], int &n)
{
    printf("\nSo phan tu mang (1 <= n <= 50): ");
    do{
        scanf("%d", &n);  
    } while (!(n >= 1 && n <= 50) && printf("\nSai dieu kien!. Hay nhap lai: "));

    for (int i=0; i<n; i++)
    {
        printf("\nPhan tu thu %d: ", i); scanf("%d", &a[i]);  
    }
}
void tongDuong(int a[], int n)
{
    int tong = 0;
    for (int i=0; i<n; i++)
        if (a[i] > 0)
            tong += a[i]; 
    printf("\nTong cac so duong la: %d", tong); 
}
void tongAm(int a[], int n)
{
    int tong = 0;
    for (int i=0; i<n; i++)
        if (a[i] < 0)
            tong += a[i]; 
    printf("\nTong cac so am la: %d", tong); 
}

int main()
{
    int a[100], n;
    nhapMang(a, n); getch();
    tongDuong(a, n); getch();
    tongAm(a, n); getch();
}
