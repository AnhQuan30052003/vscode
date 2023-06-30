/*Viết chương trình nhập vào một ma trận vuông có nxn phần tử là số nguyên (2 ≤ n ≤ 5).
a.      Xuất ra màn hình ma trận đó
b.      Tính tổng các phần tử nằm trên đường chéo chính.
c.      Đếm số phần tử chẵn trong ma trận.
d.      In ra các phần tử thuộc dòng chẵn và cột lẻ.
*/
#include <stdio.h> 
#include <conio.h>

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
}
//cau a
void xuatMT(int a[][100], int n)
{
    printf("-Ma tran vua nhap:\n"); getch();
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=n; j++)
            printf("%5d", a[i][j]);
        printf("\n"); 
    }
}
//cau b
void tongPTDuongCheoChinh(int a[][100], int n)
{
    int tong = 0;
    for (int i=1; i<=n; i++)
        for (int j=1; j<=n; j++)
            if (i == j)
                tong+=a[i][j];
    printf("\n-Tong cac phan tu tren duong cheo chinh la: %d", tong); 
}
//cau c
void demSoChan(int a[][100], int n)
{
    int dem = 0;
    for (int i=1; i<=n; i++)
        for (int j=1; j<=n; j++)
            if (a[i][j] % 2 == 0)
                dem++;
    printf("\n-Co %d phan tu chan trong ma tran", dem); 
}
//cau d
void dongChanCotLe(int a[][100], int n)
{
    printf("\n-vi tri cac phan tu dong chan, cot le: "); getch();
    for (int i=1; i<=n; i++)
        for (int j=1; j<=n; j++)
            if (i % 2 == 0 && j % 2 != 0)
                printf("%d ", a[i][j]); 
}

int main()
{
    int a[100][100], n;
    nhapMT(a, n); getch();
    xuatMT(a, n); getch();
    tongPTDuongCheoChinh(a, n); getch();
    demSoChan(a, n); getch();
    dongChanCotLe(a, n); getch();
}