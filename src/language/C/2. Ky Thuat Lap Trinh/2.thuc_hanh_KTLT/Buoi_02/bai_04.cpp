//Bài 4: Cho hai số nguyên x và n, hãy tính lũy thừa xn.
#include <bits/stdc++.h>

int main()
{
    int x, n, s;
    do { printf(" Nhap x va n = "); scanf("%d%d", &x, &n);}
    while (!((x >= 1 && x <= 1000) & (n >= 1 && n <= pow(10,12))));

    s = pow(x,n);
    printf(" pow(%d,%d) = %d", x, n, s);
}
