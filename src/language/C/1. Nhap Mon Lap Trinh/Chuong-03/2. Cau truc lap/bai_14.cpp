/* Viết chương trình nhập vào 2 số nguyên dương a và b.
Tìm ước số chung lớn nhất và bội số chung nhỏ nhất của 2 số đó.
Ví dụ: Nhập vào: a = 8, b = 12
In ra:  Ước số chung lớn nhất của 8 và 12 là 4;
        Bội số chung nhỏ nhất của 8 và 12 là 24.
*/
#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b, n, usln = 1;
    printf("\nNhap 2 so nguyen duong a & b: ");
    do{
        scanf("%d%d", &a, &b); 
    } while (!(a > 0 && b > 0) && printf("\nCo so nhap khong thoa!. Hay nhap lai a & b: "));

    //tìm ước số lớn nhất
    (a > b) ? (n = b) : (n = a);
        for (int i=1; i<=n; i++)
        {
            if (a%i==0 && b%i==0)
            {
                if (i > usln)  usln = i; 
            }
        }
        printf("\nUoc so lon nhat: %d", usln); 

    //tìm bội số nhỏ nhất
        printf("\nBoi so nho nhat: %d", a*b/usln); 
}
