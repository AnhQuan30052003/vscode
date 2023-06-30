/* Viết chương trình nhập vào một ma trận các số nguyên có mxn phần tử (2 ≤ m ≤ 10, 1 ≤ n ≤ 10).
a.        Kiểm tra ma trận có tồn tại số hoàn thiện hay không
b.        Kiểm tra các phần tử trong một hàng của ma trận có tăng dần hay không.
c.        Kiểm tra một cột trong ma trận có giảm dần hay không
d.        Liệt kê các cột trong ma trận có chứa số chính phương
*/
#include <stdio.h> 
#include <conio.h> 

void NhapMT (int a[][100], int &m, int &n);
void KtraSoHoanThien (int a[][100], int m, int n);                  //cau a
void KtraTangDanTrongMotDong (int a[][100], int m, int n);          //cau b
void KtraGiamDanTrongMotCot (int a[][100], int m, int n);           //cau c
void TimCotCoSoChinhPhuong (int a[][100], int m, int n);            //cau d

int main ()
{
    int a[100][100], m, n, dong, cot;
    NhapMT (a, m, n); getch();
    KtraSoHoanThien (a, m, n); getch();
    KtraTangDanTrongMotDong (a, m, n); getch();
    KtraGiamDanTrongMotCot (a, m, n); getch();
    TimCotCoSoChinhPhuong (a, m, n); getch();
}

//nhap ma tran
void NhapMT (int a[][100], int &m, int &n)
{
    printf("\n-So dong (2<= m <=10), so cot (1<= n <=10): ");
    do{
        scanf("%d%d", &m, &n);
    }
    while (!((m>=2 && m<=5) && (n>=2 && n<=10)) && printf("\n-Nhap sai dieu kien!. Hay nhap lai m & n: "));
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
    //xuat
    printf("-Ma tran vua nhap:\n"); getch();
    for (int i=1; i<=m; i++)
    {
        for (int j=1; j<=n; j++)
            printf("%5d", a[i][j]);
        printf("\n");
    }
}
//cau a
void KtraSoHoanThien (int a[][100], int m, int n)
{
    int tong, ktra = 0;
    for (int i=1; i<=m; i++)
    {
        for (int j=1; j<=n; j++)
        {
            if (a[i][j] > 0)
            {
                tong = 0;
                for (int k=1; k<=a[i][j]/2; k++)
                    if (a[i][j] % k == 0)
                        tong+=k;
                if (tong == a[i][j])
                {
                    printf("\n-Trong ma tran co so hoan thien");
                    ktra++;
                    break;
                }
            }
        }
        if (ktra != 0)
            break;
    }
    if (ktra == 0)
        printf("\n-Ma tran KHONG ton tai so hoan thien!");
}

//cau b
void KtraTangDanTrongMotDong (int a[][100], int m, int n)
{
    int dong;
    printf("\n-Nhap dong muon kiem tra tang dan: "); scanf("%d", &dong); 
    int tang = 0;
    for (int j=1; j<n; j++) //cot
        if (a[dong][j] < a[dong][j+1])
            tang++;
    if (tang == n-1)
        printf(" -> Cac phan tu trong dong %d tang dan", dong);
    else
        printf(" -> Cac phan tu trong dong %d KHONG tang dan", dong); 
}

//cau c
void KtraGiamDanTrongMotCot (int a[][100], int m, int n)
{
    int cot;
    printf("\n-Nhap cot muon kiem tra giam dan: "); scanf("%d", &cot);
    int giam = 0;
    for (int i=1; i<m; i++)
        if (a[i][cot] > a[i+1][cot])
            giam++; 
    if (giam == m-1)
        printf(" -> Cac phan tu trong cot %d giam dan", cot);
    else
        printf(" -> Cac phan tu trong cot %d KHONG giam dan!", cot); 
}
//cau d
void TimCotCoSoChinhPhuong (int a[][100], int m, int n)
{
    int soChinhPhuong, ktra = 0;
    printf("\n-Kiem tra so chinh phuong: "); getch();
    for (int j=1; j<=n; j++)
    {
        soChinhPhuong = 0;
        for (int i=1; i<=m; i++)
        {
            for (int k=1; k<=a[i][j]; k++)
                if (k*k == a[i][j])
                {
                    soChinhPhuong++;
                    break;
                }
            if (soChinhPhuong != 0)
                break;
        }
        if (soChinhPhuong != 0)
            printf("\n + Cot %d co chua so chinh phuong", j);
        else
            ktra++;
    }
    if (ktra == n)
        printf("KHONG ton tai trong ma tran!");
}