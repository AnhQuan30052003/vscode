// Cho xâu ký tự s, kiểm tra xâu ký tự s có phải là xau đối xứng hay không
#include <bits/stdc++.h>

int n;

inline int doi_xung(int n)
{
    int x, sum = 0, m = n;
    while (n > 0)
    {
        x  = n % 10;
        sum = sum*10 + x;
        n /= 10;
    }
    if (sum == m) return true;
    return false;
}

int main()
{
    printf("\n Nhap n = "); scanf("%d", &n);
    if (doi_xung(n) == true) printf("-> %d la so doi xung", n);
    else printf("-> %d khong phai so doi xung !", n);
}