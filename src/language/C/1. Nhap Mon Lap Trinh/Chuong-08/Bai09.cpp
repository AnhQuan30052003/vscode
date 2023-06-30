/*
Viết chương trình thực hiện những yêu cầu sau:

a.      Nhập mảng một chiều chứa thông tin của n thí sinh (n là số nguyên và 3≤n≤10). Biết rằng một thí sinh gồm những thành phần như sau:

- Mã thí sinh: chuỗi tối đa 5 ký tự.

- Họ tên thí sinh: chuỗi tối đa 30 ký tự.

- Điểm toán: kiểu số thực.

- Điểm lý: kiểu số thực.

- Điểm hóa: kiểu số thực.

- Điểm tổng cộng: kiểu số thực.

b.      Xem thông tin của một thí sinh (dựa vào mã thí sinh)

c.      Xuất mảng.

d.      Liệt kê các thí sinh thi đậu. Một thí sinh đậu khi thí sinh đó có tổng điểm 3 môn lớn hơn 15 và không có môn nào bị điểm không (0).

e.      Sắp xếp mảng học sinh giảm dần theo điểm tổng cộng.
*/

#include <stdio.h>
#include <string.h>
#include <conio.h>

struct thi_sinh
{
    char ma_ts[10];
    char ho_ten[50];
    float toan, ly, hoa, diem_tong_cong;
};

/*Khai bao prototype*/
void nhap_thong_tin (thi_sinh &ts);
void xem_thong_tin_qua_ma (thi_sinh ts[]);
void xuat_thong_tin (thi_sinh ts);
void thi_dau (thi_sinh ts[]);
void sap_xep_giam_dan_theo_diem_tong_cong (thi_sinh ts[]);
/*Ket thuc khai bao*/

thi_sinh ts[100];
int n;

///////////////////////////////////////////////////////////////////////////* HAM MAIN *//////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    do{
        printf("\nNhap so luong thi sinh: "); scanf("%d", &n);
    } while (!(n >= 3 && n <= 10));

    for (int i = 1; i <= n; i++)
    {
        fflush(stdin);
        printf("\n+>Thi sinh %d:", i);
        nhap_thong_tin (ts[i]);
    }

    fflush(stdin);
    xem_thong_tin_qua_ma (ts);
    getch();

    //Xuat toan bo danh sach
    printf("\n\nToan bo danh sach:\n"); getch();
    for (int i = 1; i <= n; i++)
    {
        printf("\n+>Thi sinh %d:", i);
        xuat_thong_tin (ts[i]);
        printf("\n");
        getch();
    }

    printf("\nCac thi sinh thi dau: "); getch();
    thi_dau (ts);
    getch();

    sap_xep_giam_dan_theo_diem_tong_cong (ts);
    printf("\n\nDanh dach thi sinh duoc xep theo diem tong cong giam dan:");
    for (int i = 1; i <= n; i++)
        printf("\n%30s\t|\t%g", ts[i].ho_ten, ts[i].diem_tong_cong);
}
/////////////////////////////////////////////////////////////////////////////////* END *////////////////////////////////////////////////////////////////////////////////////////////////////

void nhap_thong_tin (thi_sinh &ts)
{
    nhap_lai:
    do{
        printf("\n - Ma thi sinh: "); gets(ts.ma_ts);
    } while (!(strlen(ts.ma_ts) == 5));

    for (int i = 0; i < strlen(ts.ma_ts); i++)
        if (!(ts.ma_ts[i] >= '0' && ts.ma_ts[i] <= '9'))
            goto nhap_lai;

    printf(" - Ho va ten: "); gets(ts.ho_ten);

    float dToan, dLy, dHoa;
    do{
        printf(" - Diem Toan: "); scanf("%f", &dToan);
    } while (!(dToan >= 0 && dToan <= 10));
    ts.toan = dToan;

    do{
        printf(" - Diem Ly: "); scanf("%f", &dLy);
    } while (!(dLy >= 0 && dLy <= 10));
    ts.ly = dLy;

    do{
        printf(" - Diem Hoa: "); scanf("%f", &dHoa);
    } while (!(dHoa >= 0 && dHoa <= 10));
    ts.hoa = dHoa;

    ts.diem_tong_cong = ts.toan + ts.ly + ts.hoa;
}

void xem_thong_tin_qua_ma (thi_sinh ts[])
{
    char ma_truy_tim[10];
    do{
        printf("\nNhap ma thi sinh can tim: "); gets(ma_truy_tim);
    } while (!(strlen(ma_truy_tim) == 5));

    int ktra = 0;
    for (int i = 1; i <= n; i++)
        if (strcmp(ma_truy_tim, ts[i].ma_ts) == 0)
        {
            xuat_thong_tin (ts[i]);
            ktra++;
        }

    if (ktra == 0)
        printf("Khong tim tim thay thi sinh nao co ma: %s", ma_truy_tim);
}

void xuat_thong_tin (thi_sinh ts)
{
    printf("\n - Ma thi sinh: %s", ts.ma_ts);
    printf("\n - Ho va ten: %s", ts.ho_ten);
    printf("\n - Toan: %g", ts.toan);
    printf("\n - Ly: %g", ts.ly);
    printf("\n - Hoa: %g", ts.hoa);
    printf("\n - Diem tong cong: %g", ts.diem_tong_cong);
}

void thi_dau (thi_sinh ts[])
{
    int ktra = 0;
    for (int i = 1; i <= n; i++)
        if (ts[i].diem_tong_cong > 15 && (ts[i].toan != 0 && ts[i].ly != 0 && ts[i].hoa != 0))
        {
            printf("\n  %s", ts[i].ho_ten);
            ktra++;
        }
    
    if (ktra == 0)
        printf("KHONG co !");
}

void sap_xep_giam_dan_theo_diem_tong_cong (thi_sinh ts[])
{
    for (int i = 1; i < n; i++)
        for (int j = i+1; j <= n; j++)
            if (ts[i].diem_tong_cong < ts[j].diem_tong_cong)
            {
                thi_sinh thay_the;
                thay_the = ts[i];
                ts[i] = ts[j];
                ts[j] = thay_the;
            }
}