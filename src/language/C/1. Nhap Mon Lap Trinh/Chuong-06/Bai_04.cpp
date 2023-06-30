/*Viết chương trình nhập vào một ma trận các số nguyên có mxn phần tử (2 ≤ m ≤ 5, 2 ≤ n ≤ 10).
a.      Tính tích các giá trị lẻ trong ma trận.
b.      Tính tích các số chẵn trên một cột trong ma trận
c.      TÍnh tổng các số hoàn thiện trong ma trận
d.      Hãy biến đổi ma trận bằng cách thay các giá trị âm bằng trị tuyệt đối của nó.
*/
#include <stdio.h>
#include <conio.h>

void NhapMT (int a[][100], int &m, int &n);
void XuatMT (int a[][100], int m, int n);
void TichCacGiaTriLe (int a[][100], int m, int n);				//cau a
void TichSoChanTrenCot (int a[][100], int m, int n);			//cau b
void TongSoHoanThien (int a[][100], int m, int n);				//cau c
void ThayGiaTriAmBangTriTuyetDoi(int a[][100], int m, int n);	//cau d

int main ()
{
    int a[100][100], m, n;
    NhapMT (a, m, n); getch();
    printf("-Ma tran vua nhap:\n"); getch();
    XuatMT (a, m, n); getch();
    TichCacGiaTriLe (a, m, n); getch();
    TichSoChanTrenCot (a, m, n); getch();
    TongSoHoanThien (a, m, n); getch();
    ThayGiaTriAmBangTriTuyetDoi (a, m, n); getch();
}

//nhap ma tran
void NhapMT (int a[][100], int &m, int &n)
{
    printf("\n-So dong (2<= m <=5) va so cot (2<= n <=10): ");
    do
    {
        scanf("%d%d", &m, &n); 
    }
    while (!((m>=2 && m<=5) && (n>=2 && n<=10)) && printf("\n-Co dieu kien nhap sai!. Hay nhap lai m va n: "));

    //nhap
    for (int i=1; i<=m; i++)
    {
        for (int j=1; j<=n; j++)
        {
            printf("a[%d][%d]:\t", i, j);
            scanf("%d", &a[i][j]);  
        }
        printf("\n");
    }
}

//xuat ma tran
void XuatMT (int a[][100], int m, int n)
{
    for (int i=1; i<=m; i++)
    {
        for (int j=1; j<=n; j++)
            printf("%5d", a[i][j]);
        printf("\n");
    }
}

//cau a
void TichCacGiaTriLe (int a[][100], int m, int n)
{
    int tich = 1, demSoChan = 0;
    for (int i=1; i<=m; i++)
        for (int j=1; j<=n; j++)
        {
            if (a[i][j] % 2 != 0)
                tich*=a[i][j];
            else
                demSoChan++;
        }
    if (demSoChan == m*n)
        tich = 0;
    printf("\n-Tich cac so le (neu co) trong ma tran = %d", tich);
}

//cau b
void TichSoChanTrenCot (int a[][100], int m, int n)
{
    int tich, demSoLe;
    printf("\n-Tich cac so chan tren:"); getch();
    for (int j=1; j<=n; j++) //cot
    {
        tich = 1, demSoLe = 0;
        for (int i=1; i<=m; i++) //dong
            if (a[i][j] % 2 == 0)
                tich*=a[i][j];
            else
                demSoLe++;
        if (demSoLe == m)
            tich = 0;
        printf("\n + Cot %d = %d", j, tich);
    }
}

//cau c
void TongSoHoanThien (int a[][100], int m, int n)
{
    int tong, tongSHT = 0;
    for (int i=1; i<=m; i++)
        for (int j=1; j<=n; j++)
        {
            tong = 0;
            for (int k=1; k<a[i][j]; k++)
                if (a[i][j] % k == 0)
                    tong+=k;
            if (tong == a[i][j])
                tongSHT+=a[i][j];
        }
    printf("\n-Tong so hoan thien (neu co) = %d", tongSHT);
}

//cau d
void ThayGiaTriAmBangTriTuyetDoi(int a[][100], int m, int n)
{
    //thay gia tri
    for (int i=1; i<=m; i++)
        for (int j=1; j<=n; j++)
            if (a[i][j] < 0)
                a[i][j] = (-1)*a[i][j];

    //in ra ma tran moi
    printf("\n-Ma tran sau khi bien doi gia tri am bang tri tuyet doi cua no:\n"); getch();
    XuatMT(a, m, n);
}