/* Vào một buổi sáng anh Bo sắp một đàn bò gồm n con bò để vắt sữa. Anh dự kiến là vào sáng hôm đó, con bò thứ i có khả năng sẽ vắt được ai lít sữa.
Tuy nhiên đàn bò của anh có đặc tính là cứ mỗi lần vắt sữa một con, những con còn lại trông thấy sợ quá nên sẽ bị giảm sản lượng mỗi con 01 lít sữa.
Nếu vắt sữa con bò thứ nhất, n-1 con còn lại bị giảm sản lượng. Sau đó vắt sữa con bò thứ hai thì n-2 con còn lại bị giảm sản lượng....
Bạn hãy giúp anh Bo tính xem thứ tự vắt sữa bò như thế nào để số lượng sữa vắt được là nhiều nhất nhé. */
#include <bits/stdc++.h>

FILE *file;
char path[100] = "bo.txt";
int so_bo;
int sua[100];

void doc_file()
{
    file = fopen(path, "r");
    fscanf(file, "%d", &so_bo);
    for (int i = 0; i < so_bo; i++) fscanf(file, "%d", &sua[i]);
    fclose(file);
}

void sap_xep()
{
    for (int i = 0; i < so_bo-1; i++)
        for (int j = i+1; j < so_bo; j++)
            if (sua[i] < sua[j])
            {
                int x = sua[i];
                sua[i] = sua[j];
                sua[j] = x;
            }
}

int tim_sua()
{
    sap_xep();
    int sua_vat;
    int tong_sua = 0;
    for (int i = 0; i < so_bo; i++)
    {
        sua_vat = sua[i] - i;
        if (sua_vat < 0) sua_vat = 0;
        tong_sua += sua_vat;
    }
    return tong_sua;
}

int main()
{
    doc_file();
    printf("\n Sua vat duoc: %d", tim_sua());
}