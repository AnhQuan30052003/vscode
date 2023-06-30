//Viết chương trình nhập một chuỗi từ bàn phím (Các từ cách nhau một khoảng trắng). Tìm từ có chiều dài ngắn nhất và in ra.
#include <stdio.h>
#include <string.h>

void lapLai (char s[])
{
    for (int i=0; i<strlen(s); i++)
        s[i] = ' ';
}

int main()
{
    char s[255];
    printf("\nNhap chuoi: "); gets(s);

    int i=0, first=0;
    while (i<strlen(s) && s[i++] == ' ')
        first++;
    int dem=0, min=100;
    for (int i=first; i<strlen(s); i++)
    {
        if (s[i] != ' ')
            dem++;
        if (s[i] == ' ' || i==strlen(s)-1)
        {
            if (dem < min)
                min = dem;
            dem = 0;
        }
    }

    //chay lai vong lap de tim tu do
    char c[255];
    int k=0;
    for (int i=first; i<strlen(s); i++)
    {
        if (s[i] != ' ')
        {
            dem++;
            c[k++] = s[i];
        }
        if (s[i] == ' ' || i==strlen(s)-1)
        {
            if (dem == min)
            {
                printf("\n-> Tu ngan nhat trong chuoi la: %s", c);
                break;
            }
            lapLai (c);
            dem = 0, k = 0;
        }
    }
}