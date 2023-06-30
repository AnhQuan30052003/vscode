/*Viết chương trình nhập một chuỗi từ bàn phím. Kiểm tra tính đối xứng của chuỗi vừa nhập.
Ví dụ: Chuỗi abcdcba là chuỗi đối xứng; chuỗi abcd không phải chuỗi đối xứng
Gợi ý: Sử dụng vòng lặp để duyệt chuỗi. Nếu có 1 cặp ký tự (i, n – i -1) khác nhau => chuỗi không đối xứng (n là độ dài của chuỗi).
*/
#include <stdio.h> 
#include <string.h> 

int main()
{
    char s[255];
    printf("\nNhap chuoi: "); gets(s);
    int demSai = 0;
    for (int i=0; i<strlen(s)/2; i++)
        if (s[i] != s[strlen(s)-1-i])
        {
            demSai++;
            break;
        }
    if (demSai == 0)
        printf(" -> chuoi \"%s\" la chuoi doi xung", s);
    else
        printf(" -> chuoi \"%s\" KHONG doi xung!", s);
}