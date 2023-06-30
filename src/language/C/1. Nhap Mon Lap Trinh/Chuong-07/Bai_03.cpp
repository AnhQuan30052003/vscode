// Viết chương trình nhập vào một chuỗi. Hiển thị chuỗi theo thứ tự đảo ngược.
#include <stdio.h> 
#include <string.h> 

int main()
{
    char s[255];
    printf("\nNhap chuoi: "); gets(s);
    printf("------------------------");
    printf("\n-> %s", strrev(s)); 
}