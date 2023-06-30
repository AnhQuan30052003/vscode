/* Viết chương trình nhập vào 1 chuỗi và 1 ký tự, kiểm tra ký tự có trong chuỗi hay không, nếu có đưa ra số lần xuất hiện của ký tự đó trong chuỗi.
Ví dụ: Chuỗi = “Nhap mon lap trinh” ; ký tự = ‘a’
In ra: Có ký tự ‘a’ trong chuỗi. Số lần xuất hiện = 2
*/
#include <stdio.h>
#include <string.h>

void ktraXuatHien (char s[]);

int main()
{
    char s[255];
    printf("\nNhap chuoi: ");
    int i = 0;
    while ((s[i++] = getchar()) != '\n');
    ktraXuatHien (s);
}

void ktraXuatHien (char s[])
{
    char k;
    int dem = 0;
    printf("Nhap 1 ky tu: "); scanf("%c", &k);
    for (int i=0; i<strlen(s); i++)
        if (s[i] == k)
            dem++;
    if (dem != 0)
        printf("-> Ky tu '%c' co trong chuoi. So lan xuat hien = %d", k, dem);
    else
        printf("-> Ky tu '%c' KHONG co trong chuoi", k);
}
