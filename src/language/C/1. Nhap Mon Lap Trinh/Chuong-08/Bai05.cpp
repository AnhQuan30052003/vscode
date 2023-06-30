//Viết chương trình nhập tọa độ 3 đỉnh của một tam giác trong mặt phẳng Oxy. Tính diện tích, chu vi của tam giác và xuất kết quả.
#include <stdio.h>
#include <math.h>

typedef struct
{
    float x, y;
} dinh;

void nhap3Dinh (dinh d[]);
void nhapToaDo (dinh &d);
void xuatKetQua (dinh d);

int main()
{
    dinh d[3];
    nhap3Dinh (d);
}

void nhapToaDo (dinh &d)
{
    float bx, by;
    scanf("%f%f", &bx, &by);
    d.x = bx;
    d.y = by;
}
void nhap3Dinh (dinh d[])
{
    //Nhap toa do
    for (int i=1; i<=3; i++)
    {
        printf("Toa doa dinh %c(x;y): ", 64+i);
        nhapToaDo (d[i]);
    }

    //Tinh chu vi
    float c[100];
    for (int i=1; i<=3; i++)
        c[i] = sqrt(pow(d[i].x,2) + pow(d[i].y, 2)); //Tinh 3 canh tam giac
    printf("-> Chu vi = %g", c[1] + c[2] + c[3]);

    //Tinh dien tich
}