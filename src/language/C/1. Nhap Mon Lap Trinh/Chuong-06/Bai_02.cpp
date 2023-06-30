/*Viết chương trình nhập vào một ma trận các số thực có mxn phần tử (2 ≤ m ≤ 5, 2 ≤ n ≤ 10).
a.  Tính tổng các số dương trong ma trận.
b.  Tính tổng các giá trị trên một dòng trong ma trận
c.  Kiểm tra ma trận có tồn tại số dương hay không
d.  Kiểm tra ma trận có toàn dương hay không
*/
#include <stdio.h> 
#include <conio.h>

void nhapMT(float a[][100], int &m, int &n);
void xuatMT(float a[][100], int m, int n);
void tongDuong(float a[][100], int m, int n);
void tongGiaTriTrenMotDong(float a[][100], int m, int n, int &dong);
void ktraSoDuong(float a[][100], int m, int n);
void ktraToanSoDuong(float a[][100], int m, int n);

int main()
{
    float a[100][100];
    int m, n, dong;
    nhapMT(a, m, n); getch();
    xuatMT(a, m, n); getch();
    tongDuong(a, m, n); getch();
    tongGiaTriTrenMotDong(a, m, n, dong); getch();
    ktraSoDuong(a, m, n); getch();
    ktraToanSoDuong(a, m, n); getch();
}

//nhap ma tran
void nhapMT(float a[][100], int &m, int &n)
{
    printf("\n-So dong (2<= m <=5) va so cot (2<= n <=10): ");
    do{
        scanf("%d%d", &m, &n); 
    } while (!((m>=2 && m<=5) && (n>=2 && n<=10)) && printf("\n-Co dieu kien nhap sai!. Hay nhap lai m va n: "));
    //nhap
    for (int i=1; i<=m; i++)
    {
        for (int j=1; j<=n; j++)
        {
            printf("a[%d][%d]:\t", i, j);
            scanf("%f", &a[i][j]);  
        }
        printf("\n");
    }
}
//xuat ma tran
void xuatMT(float a[][100], int m, int n)
{
    printf("-Ma tran vua nhap:\n"); getch(); 
    for (int i=1; i<=m; i++)
    {
        for (int j=1; j<=n; j++)
            printf("%5g", a[i][j]);
        printf("\n");
    }
}
//cau a
void tongDuong(float a[][100], int m, int n)
{
    float tong = 0;
    for (int i=1; i<=m; i++)
        for (int j=1; j<=n; j++)
            if (a[i][j] > 0)
                tong+=a[i][j];
    printf("\n-Tong cac so duong trong ma tran = %g", tong); 
}
//cau b
void tongGiaTriTrenMotDong(float a[][100], int m, int n, int &dong)
{
    printf("\n-Nhap dong can tinh tong: ");
    do{
        scanf("%d", &dong);
    } while (!(dong>=1 && dong<=m) && printf("\n-Dong nhap khong dung!. Hay nhap lai: "));
    float tong = 0;
    for (int j=1; j<=n; j++)
        tong+=a[dong][j];
    printf(" -> Tong gia tri tren dong %d la: %g", dong, tong); 
}
//cau c
void ktraSoDuong(float a[][100], int m, int n)
{
    int ktra = 0;
    for (int i=1; i<=m; i++)
        for (int j=1; j<=n; j++)
            if (a[i][j] > 0)
                ktra++;
    if (ktra == 0)
        printf("\n-Ma tran KHONG ton tai so duong!");
    else
        printf("\n-Ma tran co ton tai so duong"); 
}
//cau d
void ktraToanSoDuong(float a[][100], int m, int n)
{
    int ktra = 0;
    for (int i=1; i<=m; i++)
        for (int j=1; j<=n; j++)
            if (a[i][j] > 0)
                ktra++;
    if (ktra == m*n)
        printf("\n-Ma tran toan so duong");
    else
        printf("\n-Ma tran KHONG hoan toan la so duong!");
}