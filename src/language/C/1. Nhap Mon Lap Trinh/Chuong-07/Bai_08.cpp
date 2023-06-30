/* Viết chương trình nhập một chuỗi từ bàn phím. Sau đó:
a. Chuyển các ký tự chữ cái trong chuỗi thành chữ in hoa (không dùng hàm strupr)
b. Chuyển các ký tự chữ cái trong chuỗi thành chữ in thường (không dùng hàm strlwr)
c. Chuyển mỗi chữ cái đầu mỗi từ thành chữ in hoa, các chữ cái còn lại trong mỗi từ thành chữ in thường.
*/
#include <stdio.h> 
#include <string.h>
#include <conio.h>

void chuyenHoa (char s[]);
void chuyenThuong (char s[]);
void vietHoaDauChu (char s[]);

int main()
{
    char s[255];
    printf("\nNhap chuoi: "); gets(s);
    chuyenHoa (s); getch();
    chuyenThuong (s); getch();
    vietHoaDauChu (s); getch();
}

void chuyenHoa (char s[])
{
    for (int i=0; i<strlen(s); i++)
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i]-=32;
    printf("\n-> Chuyen Hoa: %s", s);
}
void chuyenThuong (char s[])
{
    for (int i=0; i<strlen(s); i++)
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i]+=32;
    printf("\n-> Chuyen Thuong: %s", s);
}
void vietHoaDauChu (char s[])
{
    for (int i=0; i<strlen(s); i++)
    {
        if (i==0 || (s[i-1] == ' ' && s[i] != ' '))
            if (s[i] >= 'a' && s[i] <= 'z')
                s[i]-=32;
        else
            if (s[i] >= 'A' && s[i] <= 'Z')
                s[i]+=32;
    }
    printf("\n-> Viet Hoa dau chu: %s", s);
}