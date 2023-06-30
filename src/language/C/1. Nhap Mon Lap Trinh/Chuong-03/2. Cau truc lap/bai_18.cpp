/*  Viết chương trình nhập số nguyên dương n (n > 0).
    a. Cho biết n có bao nhiêu chữ số.
    b. Tính tổng các chữ số trong n.
    c. Cho biết ký số lớn nhất, nhỏ nhất có trong n.
    d. Đếm số lượng ký số đầu tiên, ký số cuối cùng của n.
    e. Đếm số lượng ký số lớn nhất, ký số nhỏ nhất của n.
*/
#include <stdio.h> 
#include <conio.h>

//a. Cho biết n có bao nhiêu chữ số.
int demSo(int n)
{
    int dem = 0, donVi;
        while (n > 0)
        {
            n /= 10;
            dem++;
        }
        printf("\nSo ban vua nhap co %d chu so.", dem); 
    return 0;
}

//b. Tính tổng các chữ số trong n.
int tong(int n)
{   
    int tong = 0, donVi;
        while (n > 0)
        {
            donVi = n % 10; n /= 10;
            tong += donVi;
        }
        printf("\nTong la %d ", tong);
    return 0; 
}

//c. Cho biết ký số lớn nhất, nhỏ nhất có trong n.
// &
//e. Đếm số lượng ký số lớn nhất, ký số nhỏ nhất của n.
int Max_Min_va_SL(int n)
{
    int m, donVi, max = 0, min = 9, demMax = 0, demMin = 0;
    m = n;
        while (n > 0)
        {
            donVi = n % 10; n /= 10;
            if (donVi > max) max = donVi;
            if (donVi < min) min = donVi;
        }
    n = m;
        while (n > 0)
        {
            donVi = n % 10; n /= 10;
            if (donVi == max) demMax++;
            if (donVi == min) demMin++;
        }
        printf("\nKy so lon nhat: %d; Co %d so.", max, demMax); 
        printf("\nKy so nho nhat: %d; Co %d so.", min, demMin);
    return 0;
}

//d. Đếm số lượng ký số đầu tiên, ký số cuối cùng của n.
int soLuong_SoDauTienvaCuoiCung(int n)
{
    int m, donVi, soDt, soCc, demSdt = 0, demScc = 0;
    m = n;
    soCc = n % 10;
        while (n > 0)
        {
            donVi = n % 10; n /= 10;
            soDt = donVi;
        }
    n = m;
        while (n > 0)
        {
            donVi = n % 10; n /= 10;
                if (donVi == soCc) demScc++;
                if (donVi == soDt) demSdt++;
        }
        printf("\nKy so dau tien: %d; Co %d so.", soDt, demSdt); 
        printf("\nKy so cuoi cung: %d; Co %d so.", soCc, demScc); 
    return 0;
}

int main()
{
    int n;
    printf("\nNhap so nguyen duong n = ");
    do{
        scanf("%d", &n); 
    } while (n <= 0 && printf("\nNhap n khong thoa!. Hay nhap lai: "));

    demSo(n);
    tong(n);
    Max_Min_va_SL(n);
    soLuong_SoDauTienvaCuoiCung(n);
}