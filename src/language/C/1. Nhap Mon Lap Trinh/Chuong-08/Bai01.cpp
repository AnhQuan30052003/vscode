// Viết chương trình khai báo kiểu dữ liệu biểu diễn khái niệm phân số trong toán học và định nghĩa hàm nhập, hàm xuất cho kiểu dữ liệu này.
#include <stdio.h>
typedef struct
{
    int tu;
    int mau;
} phanSo;

void nhapPhanSo (phanSo &PS);
void xuatPhanSo (phanSo PS);

int main()
{
    phanSo PS;
    nhapPhanSo (PS);
    printf("-> Phan so ban vua nhap: ");
    xuatPhanSo (PS);
}
void nhapPhanSo (phanSo &PS)
{
    printf("\nTu la: "); scanf("%d", &PS.tu);
    printf("Mau la: "); scanf("%d", &PS.mau);
}
void xuatPhanSo (phanSo PS)
{
    printf("%d/%d", PS.tu, PS.mau);
}