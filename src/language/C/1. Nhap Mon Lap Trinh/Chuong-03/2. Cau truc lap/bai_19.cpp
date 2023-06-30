/*  Viết chương trình nhập vào một số nguyên dương n > 1, sau  đó in ra n số hạng đầu tiên của dãy số Fibonacci, biết rằng:

        f0 = f1 = 1

        fn = fn – 1 + fn – 2

Ví dụ: Với n = 10 ta có dãy số Fibonacci như sau: 1  1  2  3  5  8  13  21  34  55  89
*/

#include <stdio.h>

int main()
{
    int n;
    do{
        printf("\nNhap mot so nguyen duong n > 1: "); scanf("%d", &n);
    } while (n <= 1);

    //Xay dung thuat toan:
    int x1 = 1, x2 = 1, x3;
    while (x1 <= n)
    {
        printf("%5d", x1);
        x3 = x1 + x2;
        x1 = x2;
        x2 = x3;
    }
}