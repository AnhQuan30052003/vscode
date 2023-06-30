/*
Viết chương trình nhập vào 2 số nguyên x, y. Sau đó viết các hàm thực hiện các yêu cầu sau:
*/
#include <stdio.h> 
#include <conio.h>

//a. Kiểm tra xem x có chia hết cho y không?
void cau_a(int x, int y)
{
    if (x % y == 0)
        printf("\n%d chia het cho %d. Va ket qua bang %d", x, y, x/y);
    else
        printf("\n%d khong chia het cho %d. Vi bang %d, du %d", x, y, x/y, x%y);  
}
//b. Tìm số lớn nhất trong 2 số
void cau_b(int x, int y)
{
    printf("\nSo lon nhat la: %d", (x > y) ? x : y);
}
//c. Tìm USCLN của 2 số nguyên.
void cau_c(int x, int y)
{
    int usln;
    while (x != y)
        (x > y) ? (x -= y) : (y -= x);
    usln = x = y;
    printf("\nUSCLN = %d", usln); 
}

int main()
{
    int x, y;
    printf("\nNhap 2 so nguyen x & y = "); scanf("%d%d", &x, &y);
    cau_a(x, y); getch(); 
    cau_b(x, y); getch(); 
    cau_c(x, y); getch(); 
}