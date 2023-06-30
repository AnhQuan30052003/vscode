/*
Bài 5: Số hoàn hảo là số có tổng các ước số bằng chính nó. Ví dụ 28 là số hoàn hảo (28 = 1+2+4+7+14).
Cho một số nguyên n, hãy kiểm tra xem n có phải là số hoàn hảo hay không.
*/

#include <stdio.h> 

int so_hoan_hao(int n);

int main()
{
    int n;
    do{
        printf("\n Nhap so tu nhien n = "); scanf("%d", &n);
    } while (!(n > 0));

    if (so_hoan_hao(n) == true) printf(" %d la so hoan hao", n);
    else printf(" %d khong phai so hoan hao !", n);
}

inline int so_hoan_hao(int n)
{
    int tong = 0;
    for (int i = 1; i <= n/2; i++)
        if (n % i == 0)
            tong += i;
    if (tong == n) return true;
    return false;
}
