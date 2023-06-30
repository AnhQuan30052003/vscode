// Viết chương trình nhập tọa độ tâm và bán kính của một đường tròn trong mặt phẳng Oxy. Tính diện tích và chu vi của nó và xuất ra kết quả.
#include <stdio.h>
#define pi 3.14

struct duong_tron
{
    char ten;
    float x, y;
    float bk;
};

void nhapDuLieu (duong_tron &a);
void xuatDuLieu (duong_tron a);

int main()
{
    duong_tron a;
    nhapDuLieu (a);
    xuatDuLieu (a);
}

void nhapDuLieu (duong_tron &a)
{
    printf("\nTam duong tron ten: "); scanf("%c", &a.ten);
    printf("Hoanh do: x = "); scanf("%f", &a.x);
    printf("Tung do: y = "); scanf("%f", &a.y);
    printf("Nhap ban kinh duong tron: "); scanf("%f", &a.bk);
}
void xuatDuLieu (duong_tron a)
{
    printf("\nDuong tron tam %c(%g;%g):", a.ten, a.x, a.y);
    printf("\n-> Chu vi: %g", a.bk*2*pi);
    printf("\n-> Dien tich: %g", pi*a.bk*a.bk);
}