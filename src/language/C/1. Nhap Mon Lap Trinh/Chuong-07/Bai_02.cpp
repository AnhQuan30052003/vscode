/* Viết chương trình nhập vào một chuỗi:
a. In ra các ký tự lên màn hình, mỗi ký tự nằm trên một dòng.
b. Đếm số ký tự trong chuỗi.
c. Đếm số ký tự không phải nguyên âm trong chuỗi.
*/
#include <stdio.h> 
#include <string.h> 

void inKytu (char s[]);
void demKyTuKhongPhaiNguyenAm (char s[]);

int main()
{
    char s[255];
    printf("\nNhap chuoi: "); gets(s);
    inKytu (s);
    printf("\n-> Trong chuoi co %d ky tu", strlen(s));
    demKyTuKhongPhaiNguyenAm (s);
}

void inKytu (char s[])
{
    printf("Moi ky tu duoc bieu dien tren 1 dong:");
    for (int i=0; i<strlen(s); i++)
        printf("\n%5c", s[i]);
}
void demKyTuKhongPhaiNguyenAm (char s[])
{
    int dem = 0;
    for (int i=0; i<strlen(s); i++)
        if (!(s[i] == 'U' || s[i] == 'u' || s[i] == 'E' || s[i] == 'e' || s[i] == 'O' || s[i] == 'o' || s[i] == 'A' || s[i] == 'a' || s[i] == 'I' || s[i] == 'i'))
            dem++;
    printf("\n-> So ky tu KHONG phai nguyen am trong chuoi: %d", dem);
}