/* Viết chương trình nhập vào một ma trận các số thực có mxn phần tử (2 ≤ m ≤ 5, 2 ≤ n ≤ 10).
a.        Tìm giá trị lớn nhất trên một dòng trong ma trận
b.        Tìm số chẵn xuất hiện đầu tiên trong ma trận
c.        Đếm số phần tử âm trên một cột trong ma trận
d.        Tính tích các giá trị dương trên một dòng trong ma trận
*/
#include <stdio.h>
#include <conio.h>

void NhapMT (float a[][100], int &m, int &n);
void GiaTriLonNhatTrenMotDong (float a[][100], int m, int n);               //cau a
void SoChanDauTien (float a[][100], int m, int n);                          //cau b
void SoPhanTuAmTrenMotCot (float a[][100], int m, int n);                   //cau c
void TichGiaTriDuongTrenMotDong (float a[][100], int m, int n);             //cau d

int main()
{
    float a[100][100];
    int m, n, dong, cot;
    NhapMT (a, m, n); getch();
    GiaTriLonNhatTrenMotDong (a, m, n); getch();
    SoChanDauTien (a, m, n); getch();
    SoPhanTuAmTrenMotCot (a, m, n); getch();
    TichGiaTriDuongTrenMotDong (a, m, n); getch();
}

//nhap ma tran
void NhapMT (float a[][100], int &m, int &n)
{
    printf("\n-So dong (2<= m <=5), so cot (2<= n <=10): ");
    do{
        scanf("%d%d", &m, &n);
    } while (!((m>=2 && m<=5) && (n>=2 && n<=10)) && printf("\n-Nhap sai dieu kien!. Hay nhap lai m & n: "));
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
    //xuat
    printf("-Ma tran vua nhap:\n"); getch();
    for (int i=1; i<=m; i++)
    {
        for (int j=1; j<=n; j++)
            printf("%5g", a[i][j]);
        printf("\n");
    }
}
//cau a
void GiaTriLonNhatTrenMotDong (float a[][100], int m, int n)
{
    int dong;
    printf("\n-Nhap dong muon tim gia tri lon nhat: ");
    scanf("%d", &dong); 
    //tim gia tri
    float max = a[dong][1];
    for (int j=1; j<=n; j++)
        if (a[dong][j] > max)
            max = a[dong][j];
    printf(" -> Gia tri lon nhat tren dong %d la: %g", dong, max);
}
//cau b
void SoChanDauTien (float a[][100], int m, int n)
{
    int ktra = 0;
    for (int i=1; i<=m; i++)
    {
        for (int j=1; j<=n; j++)
            if (a[i][j] == (int)a[i][j])
                if ((int)a[i][j] % 2 == 0)
                {
                    printf("\n-So chan dau tien la: %g", a[i][j]);
                    ktra++;
                    break;
                }
        if (ktra != 0)
            break;
    }
    if (ktra == 0)
        printf("\n-Trong ma tran KHONG co so chan!");
}
//cau c
void SoPhanTuAmTrenMotCot (float a[][100], int m, int n)
{
    int cot;
    printf("\n-Nhap cot muon dem gia tra am: ");
    scanf("%d", &cot);
    int dem = 0;
    for (int i=1; i<=m; i++)
        if (a[i][cot] < 0)
            dem++;
    printf(" -> Co %d phan tu am trong cot %d", dem, cot);
}
//cau d
void TichGiaTriDuongTrenMotDong (float a[][100], int m, int n)
{
    int dong;
    printf("\n-Nhap dong muon tinh gia tri duong: ");
    scanf("%d", &dong);
    int tich = 1, demAm = 0;
    for (int j=1; j<=n; j++)
    {
        if (a[dong][j] > 0)
            tich*=a[dong][j];
        else
            demAm++;
    }
    if (demAm == m)
        tich = 0;
    printf(" -> Tich cac gia tri duong tren dong %d la: %d", dong, tich);
}