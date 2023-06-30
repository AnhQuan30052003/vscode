/* 
 Viết hàm in ra n số fibonaci đầu tiên, với n được nhập vào.
*/
#include <stdio.h>
#include <conio.h>

void fibonaci(int n)
{
    int x1, x2, x3;
    x1 = x2 = 1;
    while (x1 < n)
    {
        printf("%d ", x1);
        x3 = x1 + x2;
        x1 = x2;
        x2 = x3;
    }
}

int main()
{
    int n;
    printf("\nNhap so nguyen duong n = ");
    do{
        scanf("%d", &n); 
    } while (!(n > 0) && printf("\nNhap n khong thoa! Hay nhap lai: "));

    fibonaci(n);
}