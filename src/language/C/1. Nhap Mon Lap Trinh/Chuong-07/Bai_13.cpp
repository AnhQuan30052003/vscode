//Viết chương trình tìm kiếm xem ký tự nào xuất hiện nhiều nhất trong chuỗi.
#include <stdio.h> 
#include <string.h> 

int main()
{
    char s[255];
    printf("\nNhap chuoi: "); gets(s);
    printf("Ky tu xuat hien nheu nhat:");
    //tim ky tu co so lan xuat hien nhieu nhat
    int max = 0, dem;
    for (int i=0; i<strlen(s); i++)
    {
        dem = 0;
        for (int j=0; j<strlen(s); j++)
            if (s[i] == s[j])
                dem++;
        if (dem > max)
            max = dem;
    }
    //tim ky tu do
    for (int i=0; i<strlen(s); i++)
    {
        dem = 0;
        for (int j=i; j<strlen(s); j++)
            if (s[i] == s[j])
                dem++;
        if (dem == max)
            printf("\n-> Ky tu '%c'. So la xuat hien: %d", s[i], max);
    }
}