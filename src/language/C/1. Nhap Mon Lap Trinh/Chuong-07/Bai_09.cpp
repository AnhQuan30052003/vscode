//Viết chương trình nhập vào 2 chuỗi s1 và s2. Tìm kiếm chuỗi s1 có nằm trong chuỗi s2, nếu có thì cho biết vị trí xuất hiện của chuỗi s1 trong s2.
#include <stdio.h> 
#include <string.h> 

int main()
{
    char s1[255], s2[255];
    printf("\nNhap chuoi s1: "); gets(s1);
    printf("Nhap chuoi s2: "); gets(s2);

    char *p = strstr(s2,s1);
    if (p != NULL)
    {
        printf("\n-> Chuoi \"%s\" co nam trong chuoi \"%s\"", s1, s2);
        printf("\n-> Vi tri: %d", p-s2+1);
    }
    else
        printf("\n-> Chuoi \"%s\" KHONG nam trong chuoi \"%s\" !", s1, s2);
}