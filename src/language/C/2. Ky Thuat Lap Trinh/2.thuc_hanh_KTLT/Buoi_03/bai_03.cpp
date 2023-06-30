//Bài 3: In ra số Fibonacci thứ N.
#include <bits/stdc++.h> 

int n;

void in_Fibo()
{
    int x1, x2, xn;
    x1 = x2 = 1;

    while (x1 < 2*n)
    {
        printf("%3d", x1);

        xn = x1 + x2;
        x1 = x2;
        x2 = xn;
    }
}

int fibo(int n)
{
    if (n == 1 || n == 2) return 1;
    else return fibo(n-1) + fibo(n-2);
}

int main()
{
    printf("\n Nhap n = "); scanf("%d", &n);
    in_Fibo();
    printf("\n So Fibonacy thu %d la: %d", n, fibo(n));
}