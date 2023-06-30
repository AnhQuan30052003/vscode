//Bài 2: Tìm ước chung lớn nhất của 2 số a và b.
#include <bits/stdc++.h>

int a, b;

int ucln(int a, int b)
{
    if (a == b) return a;
    else if (a > b) return ucln(a-=b, b);
    else return ucln(a, b-=a);
}

int main()
{
    printf("\n Nhap 2 so nguyen duong a & b: "); scanf("%d%d", &a, &b);
    printf(" Uoc chung lon nhat la: %d", ucln(a,b)); 
}