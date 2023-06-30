/*  Viết chương trình nhập vào một ma trận vuông có nxn phần tử là số nguyên (2 ≤ n ≤ 5).
a.        Tìm giá trị lớn nhất trên đường chéo chính
b.        Kiểm tra ma trận nhập vào có phải là ma trận chéo không?(Ma trận chéo là ma trận vuông thỏa điều kiện aij = 0, ∀i ≠ j ; có nghĩa là: Các phần tử nằm ngoài đường chéo chính có giá trị là 0, các phần tử nằm trên đường chéo chính có giá trị khác 0)
c.        Kiểm tra ma trận nhập vào có phải là ma trận đơn vị không? (Ma trận đơn vị là ma trận chéo thỏa điều kiện aij = 1, ∀i =1, 2,…, n; có nghĩa là: Các phần tử nằm ngoài đường chéo chính có giá trị là 0, các phần tử nằm trên đường chéo chính có giá trị là 1)
d.        Tìm giá trị lớn nhất trong ma trận tam giác trên (Ma trận tam giác trên là ma trận vuông thỏa điều kiện aij = 0, ∀i > j ; có nghĩa là: Các phần tử nằm phía dưới đường chéo chính có giá trị là 0)
*/
#include <stdio.h>
#include <conio.h>

void nhapMT(int a[][100], int &n);
void giaTriLonNhatTrenDuongCheoChinh(int a[][100], int n); //cau a
void maTranCheo(int a[][100], int n);                      //cau b
void maTranDonVi(int a[][100], int n);                     //cau c
void maTranTamGiacTren(int a[][100], int n);               //cau d

int main ()
{
    int a[100][100], n;
    nhapMT(a, n); getch();
    giaTriLonNhatTrenDuongCheoChinh(a, n); getch();
    maTranCheo(a, n); getch();
    maTranDonVi(a, n); getch();
    maTranTamGiacTren(a, n); getch();
}

//nhap ma tran
void nhapMT(int a[][100], int &n)
{
    printf("\n-Nhap ma tran kich thuoc nxn (2<=n<=5): "); 
    do{
        scanf("%d", &n); 
    } while (!(n>=2 && n<=5) && printf("\n-Nhap sai dieu kien!. Hay nhap lai: "));
    //nhap
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=n; j++)
        {
            printf("a[%d][%d]:\t", i, j);
            scanf("%d", &a[i][j]); 
        }
        printf("\n");
    }
    //xuat
    printf("-Ma tran vua nhap:\n");
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=n; j++)
            printf("%5d", a[i][j]);
        printf("\n");
    }
}
//cau a
void giaTriLonNhatTrenDuongCheoChinh(int a[][100], int n)
{
    int max = a[1][1];
    for (int i=1; i<=n; i++)
        for (int j=1; j<=n; j++)
            if (i==j && a[i][j] > max)
                max = a[i][j];
    printf("\n-Gia tri lon nhat tren duong cheo chinh la: %d", max);
}
//cau b
void maTranCheo(int a[][100], int n)
{
    int ktraCheo1 = 0, ktraCheo2 = 0;
    for (int i=1; i<=n; i++)
        for (int j=1; j<=n; j++)
        {
            if (i == j && a[i][j] != 0)
                ktraCheo1++;
            else if (i != j && a[i][j] == 0)
                    ktraCheo2++;
        }
    if (ktraCheo1 == n && ktraCheo2 == n*n-n)
        printf("\n-Ma tran vua nhap la ma tran cheo");
    else
        printf("\n-Ma tran vua nhap KHONG la ma tran cheo!");
}
//cau c
void maTranDonVi(int a[][100], int n)
{
    int ktraDonVi1 = 0, ktraDonVi2 = 0;
    for (int i=1; i<=n; i++)
        for (int j=1; j<=n; j++)
        {
            if (i == j && a[i][j] == 1)
                ktraDonVi1++;
            else if (i != j && a[i][j] == 0)
                    ktraDonVi2++;
        }
    if (ktraDonVi1 == n && ktraDonVi2 == n*n-n)
        printf("\n-Ma tran vua nhap la ma tran don vi");
    else
        printf("\n-Ma tran vua nhap KHONG la ma tran don vi!"); 
}
//cau d
void maTranTamGiacTren(int a[][100], int n)
{
    int ktra = 0, soKhac0 = 0;
    for (int i=1; i<=n; i++)
        for (int j=1; j<=n; j++)
        {
            if (i > j && a[i][j] == 0)
                ktra++;
            else if (!(i > j) && a[i][j] != 0)
                    soKhac0++;
        }
    if (ktra == (n*n-n)/2 && soKhac0 != 0)
    {
        printf("\n-Ma tran vua nhap la ma tran tam gia tren");
        int max = a[1][1];
        for (int i=1; i<=n; i++)
            for (int j=1; j<=n; j++)
                if (a[i][j] > max)
                    max = a[i][j];
        printf("\n Gia tri lon nhat trong ma tran = %d", max);
    }
    else
        printf("\n-Ma tran vua nhap KHONG phai ma tran tam giac tren!");
}