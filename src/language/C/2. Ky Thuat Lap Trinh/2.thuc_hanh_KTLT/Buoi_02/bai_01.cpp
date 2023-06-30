//Bài 1: Cho hai số nguyên dương a và b, hãy tìm ước số chung lớn nhất của a và b.
#include <bits/stdc++.h>

int U(int a, int b)
{
    if (a == b) return a;
    else if (a > b) return U(a = a-b, b);
    else return U(a, b = b-a);
}

int main()
{
    int a, b;
    do { printf(" Nhap a & b: "); scanf("%d%d", &a, &b); }
    while (!((a >= 1 && a <= 5000000) & (b >= 1 && b <= 5000000)));
    
    printf(" Uoc chung cua %d va %d la: %d", a, b, U(a,b));
}