/* Viết chương trình nhập một mảng số nguyên a có n phần tử (1 ≤ n ≤ 50) và một số nguyên x. Thực hiện các chức năng sau:
a.   Cho biết x có lớn hơn mọi phần tử trong mảng a hay không?
b.   Tính trung bình cộng các phần tử trong a nhỏ hơn x
c.   Cho biết có bao nhiêu phần tử dương trong mảng không phải là ước số của x
d.   Chèn x vào một vị trí vt bất kỳ trong mảng
e.   Tạo 2 mảng b và c, trong đó mảng b chứa các phần tử nhỏ hơn x, mảng c chứa các phần tử ≥ x
*/
#include <stdio.h>
#include <conio.h>

//nhap mang
void nhapMang(int a[], int &na, int &x)
{
    printf("\nNhap so luong phan tu (1<= na <=50): "); 
    do{
        scanf("%d", &na); 
    } while (!(na>=1 && na<=50) && printf("\nNhap sai kieu kien!. Hay nhap lai: "));
    for (int i=1; i<=na; i++)
    {
        printf("a[%d]:\t", i);
        scanf("%d", &a[i]); 
    }
    printf("\n-Nhap x = ");
    scanf("%d", &x);  
}
void inMang(int x[], int y)
{
    for (int i=1; i<=y; i++)
        printf("\na[%d]:\t%d", i, x[i]); 
}
//cau a
void ktraLonHon(int a[], int na, int x)
{
    int ktra = 0;
    for (int i=1; i<=na; i++)
    {
        if (a[i] > x)
        {
            printf("\n-x KHONG lon hon cac phan tu trong mang a!");
            ktra++;
            break; 
        }
    }
    if (ktra == 0)
        printf("\n-x lon hon cac phan tu trong mang a"); 
}
//cau b
void tbcNhoHonX(int a[], int na, int x)
{
    int tong = 0, dem = 0, demLon = 0;
    for (int i=1; i<=na; i++)
    {
        if (a[i] < x)
        {
            tong+=a[i];
            dem++;
        }
        else
            demLon++;
    }
    if (demLon == na)
        printf("\n-KHONG co phan tu nho hon x!"); 
    else
        printf("\n-Trung binh cong cac phan tu nho hon x la: %g", (float) tong/dem); 
}
//cau c
void duongVaUocSo(int a[], int na, int x)
{
    int dem = 0;
    for (int i=1; i<=na; i++)
        if (a[i] > 0 && x % a[i] != 0)
            dem++;
    printf("\n-Co %d phan tu duong nhung KHONG phai uoc so cua x!", dem); 
}
//cau d
void chenX(int a[], int na, int x, int &vt)
{
    printf("\n-Nhap vi tri muon chen x: "); scanf("%d", &vt);  
    for (int i=na+1; i>vt; i--)
        a[i] = a[i-1];
    a[vt] = x;
    na++;
    printf("\n-Mang sau khi chen x:"); getch();
    inMang(a, na);
}
//cau e
void mangBvaC(int a[], int na, int x, int b[], int &nb, int c[], int &nc)
{
    nb = nc = 1;
    for (int i=1; i<=na; i++)
    {
        if (a[i] < x)
        {
            b[nb] = a[i];
            nb++;
        }
        else
        {
            c[nc] = a[i];
            nc++;
        }
    }
        nb--;
        nc--;
    printf("\n-Mang B (cac phan tu < x):"); getch();
    inMang(b, nb);
    printf("\n-Mang C (cac phan tu >= x):"); getch();
    inMang(c, nc);

}
int main()
{
    int a[100], b[100], c[100], na, nb, nc, x, vt;
    nhapMang(a, na, x); getch();
    ktraLonHon(a, na, x); getch();
    tbcNhoHonX(a, na, x); getch();
    duongVaUocSo(a, na, x); getch();
    chenX(a, na, x, vt); getch();
    mangBvaC(a, na, x, b, nb, c, nc); getch();
}