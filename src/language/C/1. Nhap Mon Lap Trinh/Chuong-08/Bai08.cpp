/*
Viết chương trình thực hiện những yêu cầu sau:

a.    Nhập mảng một chiều chứa thông tin của n nhân viên (n là số nguyên và 1≤n≤20). Biết rằng một nhân viên gồm những thành phần như sau:

- Mã nhân viên: chuỗi tối đa 5 ký tự
- Tên nhân viên: chuỗi tối đa 30 ký tự.
- Lương nhân viên: kiểu số thực

b.    Xuất mảng nhân viên.

c.    Tìm một nhân viên có lương cao nhất trong mảng.

d.    Tính tổng lương các nhân viên.

e.    Sắp xếp mảng tăng dần theo lương nhân viên.
*/
#include <stdio.h>
#include <string.h>
#include <conio.h>

struct nhan_vien
{
    char ma_nv[6];
    char ho_ten[30];
    float luong_nv;
};

void nhap_thong_tin (nhan_vien &nv);
void xuat_thong_tin (nhan_vien nv);
float tong_luong_nv (nhan_vien nv[]);
void sap_xep_theo_luong (nhan_vien nv[]);

nhan_vien nv[100];
int n;

/*Ham main*/
int main()
{
    do{
        printf("\nNhap so luong nhan vien: "); scanf("%d", &n);
    } while (!(n >= 1 && n <= 20));

    //Nhap mang
    for (int i = 1; i <= n; i++)
    {
        fflush(stdin);
        printf("\n+> Nhan vien %d:", i);
        nhap_thong_tin (nv[i]);
    }

    //Xuat mang vua nhap
    printf("\nThong tin vua nhap:\n"); getch();
    for (int i = 1; i <= n; i++)
    {
        printf("\n+> Nhan vien %d:", i);
        xuat_thong_tin (nv[i]);
        printf("\n");
    }

    //Tong luong cac nhan vien
    printf("\nTong luong cac nhan vien = %g", tong_luong_nv (nv));

    //Sap xep
    sap_xep_theo_luong (nv);
    printf("\n\nDanh sach nhan vien duoc sap xep tang dan theo luong:");
    for (int i = 1; i <= n; i++)
        printf("\n%30s\t| %g", nv[i].ho_ten, nv[i].luong_nv);
}

//Nhap thong tin
void nhap_thong_tin (nhan_vien &nv)
{
    do{
        printf("\n - Ma nhan vien: "); gets(nv.ma_nv);
    } while (!(strlen(nv.ma_nv) == 5));

    printf(" - Ho va ten: "); gets(nv.ho_ten);
    float luong;
    printf(" - Luong: "); scanf("%f", &luong);
    nv.luong_nv = luong;
}

//Xuat thong tin
void xuat_thong_tin (nhan_vien nv)
{
    printf("\n - Ma nhan vien: %s", nv.ma_nv);
    printf("\n - Ho va ten: %s", nv.ho_ten);
    printf("\n - Luong: %g", nv.luong_nv);   
}

//Tong luong nhan vien
float tong_luong_nv (nhan_vien nv[])
{
    float tong = 0;
    for (int i = 1; i <= n; i++)
        tong += nv[i].luong_nv;
    return tong;
}

//Sao xep tang dan theo luong
void sap_xep_theo_luong (nhan_vien nv[])
{
    for (int i = 0; i < n; i++)
        for (int j = i+1; j <= n; j++)
            if (nv[i].luong_nv > nv[j].luong_nv)
            {
                nhan_vien x;
                x = nv[i];
                nv[i] = nv[j];
                nv[j] = x;
            }
}