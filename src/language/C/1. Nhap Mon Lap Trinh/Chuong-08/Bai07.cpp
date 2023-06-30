/*
Cho cấu trúc NHANVIEN như sau:

- Mã NV: kiểu số nguyên có giá trị trong khoảng 0…65535
- Họ tên: kiểu chuỗi.
- Địa chỉ: kiểu chuỗi.
- CBQL: có giá trị 1 nếu nhân viên này là /cán bộ quản lý/; là 0 nếu /không phải/.

Viết chương trình thực hiện:

a.    Nhập vào thông tin của n nhân viên (với n là số nguyên và 1 ≤ n ≤ 20).

b.    Nhập một số nguyên k (0 ≤ k ≤ n). Thực hiện việc chèn nhân viên mới vào danh sách tại vị trí k.

c.    In ra họ tên của các nhân viên là cán bộ quản lý

d.    Đếm số nhân viên là cán bộ quản lý.
*/

#include <stdio.h>

struct nhan_vien
{
    unsigned int ma_nv;
    char ho_ten[50];
    char dia_chi[100];
    int CBQL;
};

void nhap_thong_tin (nhan_vien &nv);
void chen_nhan_vien (nhan_vien nv[], int k);
void can_bo_quan_ly (nhan_vien nv[]);
int dem_nhan_vien_CBQL (nhan_vien nv[]);

nhan_vien nv[100];
int n, k;

/*Ham main*/
int main()
{

    do{
        printf("\nNhap so nhan vien = "); scanf("%d", &n);
    } while (!(n >= 1 && n <= 20));

    for (int i = 1; i <= n; i++)
    {
        fflush(stdin);
        printf("\nNhan vien %d:", i);
        nhap_thong_tin (nv[i]);
    }

    chen_nhan_vien (nv, k);

    printf("\nNhan vien la can bo quan ly:");
    can_bo_quan_ly (nv);

    printf("\n\nSo nhan vien la can bo quan ly: %d", dem_nhan_vien_CBQL(nv));

}
//nhap thong tin
void nhap_thong_tin (nhan_vien &nv)
{
    printf("\n - Ma nhan vien: "); scanf("%u", &nv.ma_nv);
    fflush(stdin);
    printf(" - Ho va Ten: "); gets(nv.ho_ten);
    printf(" - Dia chi: "); gets(nv.dia_chi);
    printf("   Neu la Can bo quan ly, nhap 1. Khong phai, nhap 0\n");
    printf(" - CBQL: "); scanf("%d", &nv.CBQL);
}

//chen nhan vien
void chen_nhan_vien (nhan_vien nv[], int k)
{
    do{
        printf("\nVi tri them nhan vien: "); scanf("%d", &k);
    } while (!(k >= 1 && k <= n));

    for (int i = n+1; i > k; i--)
        nv[i] = nv[i-1];

    n++;
    fflush(stdin);
    nhap_thong_tin (nv[k]);
}

//In ho ten can bo quan ly
void can_bo_quan_ly (nhan_vien nv[])
{
    for (int i = 1; i <= n; i++)
        if (nv[i].CBQL == 1)
            printf("\n\t%s", nv[i].ho_ten);
}

int dem_nhan_vien_CBQL (nhan_vien nv[])
 {
    int dem = 0;
    for (int i = 1; i <= n; i++)
        if (nv[i].CBQL == 1)
            dem++;
    return dem;
 }
