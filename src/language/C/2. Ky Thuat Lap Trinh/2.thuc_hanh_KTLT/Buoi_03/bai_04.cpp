//Bài 4: Tính giai thừa của một số N > 0.
#include <bits/stdc++.h>

int gt(int i)
{
    if (i == 0 || i == 1) return 1;
    else return i*gt(i-1);
}

int main()
{
    int n;
    printf("\n Nhap n = "); scanf("%d", &n);
    printf(" %d! = %d", n, gt(n));
}