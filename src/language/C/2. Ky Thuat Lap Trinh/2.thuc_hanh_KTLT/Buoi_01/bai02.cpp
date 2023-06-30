//Bài 2: In ra dãy Fibonacci gồm N phần tử.
#include <stdio.h> 

void fibo(int n);

int main()
{
    int n;
    printf("\n Nhap n = "); scanf("%d", &n);
    printf(" Day Fibonacy <= %d la: ");
    fibo(n);
}

void fibo(int n)
{
    int x1, x2, x3;
    x1 = 0;
    x2 = 1;
    
    while (x1 <= n)
    {
        printf("%3d", x1);
        x3 = x1 + x2;
        x1 = x2;
        x2 = x3;
    }
}