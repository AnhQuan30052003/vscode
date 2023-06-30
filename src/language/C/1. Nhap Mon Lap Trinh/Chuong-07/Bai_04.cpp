//Viết chương trình thay thế các ký tự không phải nguyên âm trong chuỗi đã cho thành khoảng trắng.
#include <stdio.h> 
#include <string.h> 

void thayThe (char s[])
{
    for (int i=0; i<strlen(s); i++)
        if (!(s[i] == 'U' || s[i] == 'u' || s[i] == 'E' || s[i] == 'e' || s[i] == 'O' || s[i] == 'o' || s[i] == 'A' || s[i] == 'a' || s[i] == 'I' || s[i] == 'i'))
            s[i] = ' ';
    //in ra lai chuoi
    printf("-> Thay cac ky tu khong phai nguyen am thanh khoang trang, ta duoc: %s", s);
}
int main()
{
    char s[255];
    printf("\nNhap chuoi: "); gets(s);
    thayThe (s);
}