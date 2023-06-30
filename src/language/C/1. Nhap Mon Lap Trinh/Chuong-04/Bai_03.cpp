/*
Viết chương trình có sử dụng hàm, in ra bảng cửu chương n (n là một tham số có giá trị từ 1 đến 10 và được nhập vào từ bàn phím).
*/
#include <stdio.h> 
#include <conio.h>
//nhap n
void nhap(int &n)
{
    printf("\nNhap n thoa dieu kien (1 <= n <= 9): ");
    do{
        scanf("%d", &n); 
    } while (!(n >= 1 && n <= 9) && printf("\nNhap n sai. Hay nhap lai: "));
}
//ini ban cuu chuong
void cuuChuong(int n)
{
    for (int i=1; i<=10; i++)
        printf("\n%d x %d = %d", n, i, n*i); 
}

int main()
{
    int n;
    nhap(n);
    printf("\nBang cuu chuong %d", n); 
    cuuChuong(n);
}