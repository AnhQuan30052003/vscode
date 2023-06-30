/*  Viết chương trình nhập vào một ma trận vuông có nxn phần tử là số nguyên (2 ≤ n ≤ 5).
a.         Đếm số phần tử âm trong ma trận
b.         In ra các phần tử dương chẵn nằm trên đường chéo chính
c.         Tính tổng các phần tử thuộc ma trận tam giác trên (không tính đường chéo) trong ma trận vuông.
d.         Tính tổng các phần tử trên đường chéo phụ
*/
#include <stdio.h>
#include <conio.h>

void NhapMT (int a[][100], int &n);
void SoPhanTuAm (int a[][100], int n);              //cau a
void PhanTuDuongChan (int a[][100], int n);         //cau b
void TongPhanTuTamGiacTren (int a[][100], int n);   //cau c
void TongPhanTuDuongCheoPhu (int a[][100], int n);  //cau d

int main ()
{
    int a[100][100], n;
    NhapMT (a, n); getch();
    SoPhanTuAm (a, n); getch();
    PhanTuDuongChan (a, n); getch();
    TongPhanTuTamGiacTren (a, n); getch();
    TongPhanTuDuongCheoPhu (a, n); getch();
}

//nhap ma tran
void NhapMT (int a[][100], int &n)
{
    printf("\n-Nhap ma tran vuong kich thuoc nxn (2<=n<=5): "); 
    do{
        scanf("%d", &n); 
    }
    while (!(n>=2 && n<=5) && printf("\n-Nhap sai dieu kien!. Hay nhap lai: "));
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
    printf("Ma tran vua nhap:\n"); getch();
    for (int i=1; i<=n; i++)    
    {
        for (int j=1; j<=n; j++)
            printf("%5d", a[i][j]);
        printf("\n"); 
    }
}
//cau a
void SoPhanTuAm (int a[][100], int n)
{
    int dem = 0;
    for (int i=1; i<=n; i++)
        for (int j=1; j<=n; j++)
            if (a[i][j] < 0)
                dem++;
    printf("\n-So phan tu am trong ma tran: %d", dem);
}
//cau b
void PhanTuDuongChan (int a[][100], int n)
{
    printf("\n-Phan tu duong, chan va nam tren duong cheo chinh: "); getch(); 
    int ktra = 0;
    for (int i=1; i<=n; i++)
        for (int j=1; j<=n; j++)
        {
            if (i == j && a[i][j] > 0 && a[i][j] % 2 == 0)
                printf("%d ", a[i][j]);
            else
                ktra++;
        }
    if (ktra == n*n)
        printf("KHONG ton tai!"); 
}
//cau c
void TongPhanTuTamGiacTren (int a[][100], int n)
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
        int tong = 0;
        for (int i=1; i<=n; i++)
            for (int j=1; j<=n; j++)
                if (i < j)
                    tong+=a[i][j];
        printf("\n -> Tong cac phan tu tam giac tren trong ma tran = %d", tong);
    }
    else
        printf("\n-Ma tran vua nhap KHONG phai ma tran tam giac tren!");
}
//cau d
void TongPhanTuDuongCheoPhu (int a[][100], int n)
{
    int tong = 0;
    for (int i=1; i<=n; i++)
        for (int j=1; j<=n; j++)
            if (i + j == n + 1)
                tong+=a[i][j];   
    printf("\n-Tong cac phan tu tren duong cheo phu la: %d", tong);
}