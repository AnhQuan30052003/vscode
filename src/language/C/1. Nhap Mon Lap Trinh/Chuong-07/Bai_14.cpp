// Viết chương trình nhập một chuỗi từ bàn phím (Các từ cách nhau một khoảng trắng). Tìm từ có chiều dài dài nhất và in ra.
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char chuoi[255];
    cout << "\nNhap chuoi: "; gets(chuoi);

    //Bat dau tinh toan

    int i = 0, first = 0;
    while (i < strlen(chuoi) && chuoi[i++] == ' ')              /// Rut ngan khoang cach vao ky tu dau tien
        first++;

    int max = 0, dem_ky_tu = 0;
    for (int i = first; i < strlen(chuoi); i++)                 /// Vong lap tim tu dai nhat trong chuoi
    {
        if (chuoi[i] != ' ')
            dem_ky_tu++;
        
        if (chuoi[i] == ' ' || i == strlen(chuoi)-1)
        {
            if (dem_ky_tu > max)
                max = dem_ky_tu;
                
            dem_ky_tu = 0;
        }
    }

    char c[255];
    int k = 0;
    for (int i = first; i < strlen(chuoi); i++)                 /// Vong lap tim lai tu dai nhat trong chuoi
    {
        if (chuoi[i] != ' ')
        {
            dem_ky_tu++;
            c[k++] = chuoi[i];
        }

        if (chuoi[i] == ' ' || i == strlen(chuoi)-1)
        {
            if (dem_ky_tu == max)
            {
                cout << "-> Tu dai nhat la: " << c;
                break;
            }
            else
                k = dem_ky_tu = 0;
        }
    }
}