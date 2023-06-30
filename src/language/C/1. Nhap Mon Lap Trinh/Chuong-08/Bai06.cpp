/*
Viết chương trình khai báo kiểu dữ liệu để biểu diễn thông tin của một hộp sữa. Biết rằng một hộp sữa gồm những thành phần như sau:

- Nhãn hiệu: chuỗi tối đa 20 ký tự.

- Trọng lượng: kiểu số thực.

- Hạn sử dụng: kiểu dữ liệu ngày (NGAY).

Sau đó viết hàm nhập và hàm xuất cho kiểu dữ liệu này.
*/

#include <stdio.h>

typedef struct 
{
    unsigned ngay;
    unsigned thang;
    unsigned nam;
} ngay;

struct hop_sua
{
    char nhan_hieu[20];
    float trong_luong;
    ngay han_su_dung;
};

void nhap_thong_tin (hop_sua &hs);
void xuat_thong_tin (hop_sua hs);

int main()
{
    hop_sua hs;
    nhap_thong_tin (hs);
    printf("\n->Thong tin ban vua nhap:");
    xuat_thong_tin (hs);
}

//nhap du lieu
void nhap_thong_tin (hop_sua &hs)
{
    printf("Nhan hieu: "); gets(hs.nhan_hieu);
    printf("Trong luong: "); scanf("%f", &hs.trong_luong);
    printf("Han su dung: "); scanf("%d%d%d", &hs.han_su_dung.ngay, &hs.han_su_dung.thang, &hs.han_su_dung.nam);
}

//xuat su lieu
void xuat_thong_tin (hop_sua hs)
{
    printf("\nNhan hieu: %s", hs.nhan_hieu);
    printf("\nTrong luong: %g", hs.trong_luong);
    printf("\nHan su dung: %d/%d/%d", hs.han_su_dung.ngay, hs.han_su_dung.thang, hs.han_su_dung.nam);
}