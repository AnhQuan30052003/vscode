//Viết chương trình khai báo kiểu dữ liệu biểu diễn khái niệm điểm trong mặt phẳng Oxy và định nghĩa hàm nhập, hàm xuất cho kiểu dữ liệu này.
#include <stdio.h>
typedef struct
{
    char ten;
    float x, y;
} Diem;

void nhap (Diem &d);
void xuat (Diem d);

int main()
{
    Diem d;
    nhap (d);
    printf("-> Diem ban vua nhap: ");
    xuat (d);
}

void nhap (Diem &d)
{
    printf("\nTen diem: "); scanf("%c", &d.ten); 
    printf("Hoanh do: x = "); scanf("%f", &d.x);
    printf("Tung do: y = "); scanf("%f", &d.y);
}

void xuat (Diem d)
{
    printf("%c(%g;%g)", d.ten, d.x, d.y);
}