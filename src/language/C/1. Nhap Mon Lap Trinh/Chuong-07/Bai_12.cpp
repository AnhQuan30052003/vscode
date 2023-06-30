//Cho chuỗi str, nhập vào vị trí vt và số kí tự cần xóa n, hãy xóa n kí tự tính từ vị trí vt trong chuỗi str.
#include <stdio.h>
#include <string.h> 

int main()
{
    char s[255], k;
    int vt, ktra = 0;
    printf("\nNhap chuoi: "); gets(s);
    printf("Nhap ky tu can xoa: "); scanf("%c", &k);
    printf("Nhap vi tri: ");
    do{
        scanf("%d", &vt);
    } while (!(vt >= 0 && vt <strlen(s)) && printf("\nVi tri ban nhap KHONG nam trong chuoi!. Hay nhap lai: "));

    for (int i=vt; i<strlen(s); i++)
        if (s[i] == k)
        {
            s[i] = ' ';
            ktra++;
        }
    if (ktra == 0)
        printf("-> Ky tu can xoa '%c' KHONG co trong chuoi \"%s\"", k, s);
    else
        printf("-> Chuoi sau khi xoa ky tu '%c' tu vi tri %d: %s", k, vt, s);
}