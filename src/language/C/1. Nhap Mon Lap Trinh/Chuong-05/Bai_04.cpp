/*Viết chương trình nhập một mảng số nguyên có n phần tử (1 ≤ n ≤ 50) và một số nguyên x. Thực hiện các chức năng sau:
a.    Đếm các phần tử có giá trị bằng x
b.    Tìm vị trí của phần tử có giá trị là x
c.    In ra vị trí cuối cùng của x trong mảng.
d.    Những phần tử nào (in ra cả giá trị và vị trí của phần tử đó) là ước số của x?
e.    Thay thế các phần tử có giá trị bằng x thành 0
*/
#include <stdio.h> 
#include <conio.h>

//nhap mang
void nhapMang(int a[], int &n, int &x)
{
    printf("\n-So phan tu trong mang (1 <= n <= 50): ");
    do{
        scanf("%d", &n);  
    } while (!(n >= 1 && n <= 50) && printf("\n-Nhap sai dieu kien!. Hay nhap lai: "));
    //In mang
    for (int i=1; i<=n; i++)
    {
        printf("a[%d]:\t", i);
        scanf("%d", &a[i]);  
    }
    printf("\n-Nhap so nguyen kiem tra: x = "); scanf("%d", &x); 
}
//cau a
void phanTuBangX(int a[], int n, int x)
{
    int dem = 0;
    for (int i=1; i<=n; i++)
        if (a[i] == x)
            dem++;
    printf("\n-Co %d phan tu co gia tri bang X", dem); 
}
//cau b
void viTri(int a[], int n, int x)
{
    printf("\n-Vi tri do la: "); 
    for (int i=1; i<=n; i++)
        if (a[i] == x)
            printf("a[%d] ", i); 
}
//cau c
void viTriCuoiCungCuaX(int a[], int n, int x)
{
    int viTri = 0;
    for (int i=1; i<=n; i++)
        if (a[i] == x && i > viTri)
            viTri = i;
    printf("\n-Vi tri cuoi cung cua phan tu co gia tri bang X trong mang la: a[%d]", viTri); 
}
//cau d
void uocSoCuaX(int a[], int n, int x)
{
    printf("\n-Cac so la uoc so cua X la:"); getch();
    for (int i=1; i<=n; i++)
        if (x % a[i] == 0)
            printf("\n + %d, phan tu a[%d]", a[i], i); 
}
//cau e
void thayThe(int a[], int n, int x)
{
    //thay the gia tri
    for (int i=1; i<=n; i++)
        if (a[i] == x)
            a[i] = 0;
    //in ra lai mang
    printf("\n-Mang sau khi thay the:"); getch();
    for (int i=1; i<=n; i++)
        printf("\na[%d]:\t%d", i, a[i]); 
}

int main()
{
    int a[100], n, x;
    nhapMang(a, n, x); getch();
    phanTuBangX(a, n, x); getch();
    viTri(a, n, x); getch();
    viTriCuoiCungCuaX(a, n, x); getch();
    uocSoCuaX(a, n, x); getch();
    thayThe(a, n, x); getch();
}