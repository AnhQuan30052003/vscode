//Bài 1: Viết chương trình in ra phần tử thứ N của dãy Fibonacci. 
#include <stdio.h> 

int fibo(int x);

int main()
{
    int n, x1, x2;
    x1 = x2 = 1;
    printf("\n Nhap n = "); scanf("%d", &n);
    printf(" Phan tu thu %d cua day Fibonacy la: %d", n, fibo(n));
}

inline int fibo(int x)
{
    if (x == 1 || x == 2) return 1;
    else return fibo(x - 2) + fibo(x - 1);
}
