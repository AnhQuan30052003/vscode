// Bài 8: Một cặp số nguyên dương được gọi là số bạn bè nếu tổng các ước số của số này bằng chính số kia. (không tính bản thân nó) 
#include <bits/stdc++.h>

int a, b;

int tong_us(int x)
{
    int tong = 0;
    for (int i = 1; i < x; i++)
        if (x % i == 0) tong+=i;
    return tong;
}

int bb(int a, int b)
{
    if (tong_us(a) == b && tong_us(b) == a) return true;
    return false;
}

int main()
{
    do { printf("Nhap 2 so nguyen duong: "); scanf("%d%d", &a, &b);}
    while (!((a>0 && b>0) & (a!=b)));

    if (bb(a,b) == true) printf("-> %d va %d la 2 so ban be", a, b);
    else printf("-> %d va %d khong la 2 so ban be !", a, b);
}