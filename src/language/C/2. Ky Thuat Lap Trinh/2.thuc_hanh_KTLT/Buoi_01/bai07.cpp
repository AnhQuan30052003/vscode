/*
Bài 7: Số tự nhiên N được gọi là số đẹp nếu cộng các chữ số của N lại ta có một số mà kết thúc bằng 9.
Ví dụ một số số đẹp là 18 (1+8=9), 234 (2+3+4=9), 658 (6+5+8=19).
Cho một số N, hãy kiểm tra xem N có phải là số đẹp hay không.
*/
#include <stdio.h> 

int main()
{
    int n, m, x;
    int tong = 0;
    do{
        printf("\n Nhap so tu nhien n = "); scanf("%d", &n);
    } while (!(n > 0));

    m = n;
    while (m > 0)
    {
        x = m % 10;
        m /= 10;
        tong += x;
    }
    if (tong == 9) printf(" -> %d la so dep", n);
    else printf(" -> %d khong la so dep !", n);
}