#include <stdio.h> 
#include <math.h>
#include <conio.h>
//nhap n
void nhapN(int &n)
{
    printf("\nNhap so nguyen duong n = ");
    do{
        scanf("%d", &n); 
    } while (!(n > 0) && printf("\nNhap n khong thoa! Hay nhap lai: "));
}
//a.  T1= 1+2+3+4+…+n
void T1(int n)
{
    int s = 0;
    for (int i=1; i<=n; i++)
        s += i;
    printf("\nT1 = %d", s);
}
//b.  T2= 1-2+3-4+…+(-1)n-1 n
void T2(int n)
{
    int s = 0;
    for (int i=1; i<=n; i++)
        s += pow(-1,i-1)*i;
    printf("\nT2 = %d", s);
}
//c.  T3= 1 + 1/2 + 1/3 + … + 1/n
void T3(int n)
{
    float s = 0; 
    for (int i=1; i<=n; i++)
        s += 1.0/i;
    printf("\nT3 = %g", s);
}
//d.  T4= 1 + 1/(1+2) + 1/(1+2+3)+ … + 1/(1+2+…+n)
void T4(int n)
{
    int t = 0;
    float s = 0;
    for (int i=1; i<=n; i++)
    {
        t += i;
        s += 1.0/t;
    }
    printf("\nT4 = %g", s);
}
//e.  T5 = 1 x 2 x3 x 4 x...x n
void T5(int n)
{
    int tich = 1;
    for (int i=1; i<=n; i++)
        tich *= i;
    printf("\nT5 = %d", tich); 
}

int main()
{
    int n;
    nhapN(n);
    T1(n); getch();
    T2(n); getch();
    T3(n); getch();
    T4(n); getch();
    T5(n); getch();
}