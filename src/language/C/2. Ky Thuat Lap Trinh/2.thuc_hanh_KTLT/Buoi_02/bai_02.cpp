//Bài 2: Cho số nguyên n, hãy tính n!
#include <bits/stdc++.h>

long gt(int n)
{
    if (n == 0 || n == 1) return 1;
    else return n*gt(n-1);
}

int main()
{
    int n;
    do { std::cout << " Nhap n = "; std::cin >> n; }
    while (!(n >= 1 && n <= 17));
    std::cout << n << "! = " << gt(n);
}
