/* 
 Viết chương trình nhập vào một ký tự ch. Sau đó thực hiện các yêu cầu sau (mỗi yêu cầu là một hàm):
a. Đổi một ký tự hoa sang ký tự thường.
b. Kiểm tra một ký tự có phải là nguyên âm.
c. In mã ASCII của một ký tự.
*/
#include <stdio.h>
#include <conio.h>

//cau a
void chuyenHoaSangthuong(char ch)
{
    printf("\nKy tu thuong la: %c", ch+32);
}
//cau b
void ktraNguyenAm(char ch)
{
    switch (ch)
    {
        case ('U'):
        case ('E'):
        case ('O'):
        case ('A'):
        case ('I'):
            printf("\n%c la ky tu nguyen am", ch);
            break;
        default:
            printf("\n%c khong phai ky tu nguyen am!", ch); 
    }
}
//cau c
void inMa(char ch)
{
    printf("\nMa ASCII la: %d", ch); 
}

int main()
{
    char ch;   
    printf("\nNhap ky tu hoa: ");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')
        printf("\nVoi ky tu ban vua nhap, ta co:"); 
    else
    {
        printf("\nBan nhap khong thoa yeu cau! Ket thuc chuong trinh.");
        return 0;
    }
    chuyenHoaSangthuong(ch); getch();
    ktraNguyenAm(ch); getch();
    inMa(ch); getch();
}