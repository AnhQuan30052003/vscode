//Viết hàm tra xem trong chuỗi có kí tự số hay không, nếu có thì sao chép các ký số vào một mảng số riêng.
#include <stdio.h> 
#include <string.h>
#include <stdlib.h>

int main()
{
    char s[255], c[255];
    printf("\nNhap chuoi: "); gets(s);
    int k = 0, ktra = 0;
    for (int i=0; i<strlen(s); i++)
        if (s[i] >= '0' && s[i] <= '9')
        {
            ktra++;
            c[k++] = s[i];
        }
    if (ktra == 0)
        printf("-> Chuoi vua nhap KHONG co ky tu so!");
    else
        printf("-> Mang so trong chuoi: %s", c);
}