//  Viết chương trình nhập vào một số nguyên n > 0 và một số thực x. Tính giá trị các biểu thức sau:
#include <stdio.h>
#include <conio.h>
#include <math.h>

float cau_a (int n, int x);
float cau_b (int n, int x);
float cau_c (int n, int x);
float cau_d (int n, int x);
float cau_e (int n, int x);

int n;
float x;
/////////////////////////////////////////////////////////////////////////* Ham main *///////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    printf("\n");
    do{
        printf("Nhap so nguyen duon n = "); scanf("%d", &n);
    } while (n <= 0);

    printf("Nhap so thuc x = "); scanf("%f", &x);

    //cau a
    printf("\na.    S(n)=x+x2+x3+...+xn");
    printf("\n-> S(n) = %g", cau_a (n, x));
    printf("\n");

    //cau b
    getch();
    printf("\nb.    S(n)=x2+x4+...+x2n");
    printf("\n-> S(n) = %g", cau_b (n, x));
    printf("\n");

    //cau c
    getch();
    printf("\nc.    S(n)=x+x3+x5+...+x2n+1");
    printf("\n-> S(n) = %g", cau_c (n, x));
    printf("\n");

    //cau d
    getch();
    printf("\nd.    S(n)=x+x22!+x33!+...+xnn!");
    printf("\n-> S(n) = %g", cau_d (n, x));
    printf("\n");

    //cau e
    getch();
    printf("\ne.    S(n)=1 -2 +3 -4 +...+ (-1)n-1n = (-1) mu (n-1) roi nhan voi n");
    printf("\n-> S(n) = %g", cau_e (n, x));
    printf("\n");
}
/////////////////////////////////////////////////////////////////////////* The end. *///////////////////////////////////////////////////////////////////////////////////////////////
float cau_a (int n, int x)
{
    float tong = 0;
    for (int i = 1; i <= n; i++)
        tong += pow(x, i);

    return tong;
}

float cau_b (int n, int x)
{
    float tong = 0;
    for (int i = 1; i <= n; i++)
        tong += pow(x, 2*i);
    
    return tong;
}

float cau_c (int n, int x)
{
    float tong = x;
    for (int i = 1; i <= n; i++)
        tong += pow(x, 2*i+1);
    
    return tong;
}

float cau_d (int n, int x)
{
    float tong = 0;
    int gt = 1;
    for (int i = 1; i <= n; i++)
        tong += pow(x, i)*(gt *= i);
    
    return tong;
}

float cau_e (int n, int x)
{
    float tong = 0;
    for (int i = 1; i <= n; i++)
        tong += pow(-1, i-1)*i;

    return tong;
}