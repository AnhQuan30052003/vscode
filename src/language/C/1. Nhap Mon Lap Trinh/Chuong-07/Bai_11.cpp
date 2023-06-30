// Viết chương trình nhập một chuỗi bất kì, yêu cầu nhập 1 kí tự muốn xóa. Thực hiện xóa tất cả những kí tự đó trong chuỗi.
#include <stdio.h> 
#include <string.h> 

int main()
{
    char s[255], k;
    int ktra = 0;
    printf("\nNhap chuoi: "); gets(s);
    printf("Nhap ky tu muon xoa: "); scanf("%c", &k);
    for (int i=0; i<strlen(s); i++)
        if (s[i] == k)
        {
            ktra++;
            s[i] = ' ';
        }
    if (ktra == 0)
        printf("-> Ky tu ban muon xoa KHONG co trong chuoi!");
    else
        printf("-> Chuoi sau khi xoa ky tu '%c': %s", k, s);
}