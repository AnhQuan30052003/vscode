// Cho mot mang tang dan, yeu cau tim vi tri mot phan tu co trng mang. Neu khong tim thay, tra ve -1
#include <bits/stdc++.h>

int a[] {1,22,30,14,15,26,47,80,90};
int n = sizeof(a)/sizeof(a[0]);
int x;

int tim_vt(int a[], int first, int last, int x)
{
    if (first > last) return -1;
    else
    {
        int m = (first + last)/2;
        if (x == a[m]) return m;
        else if (x > a[m]) return tim_vt(a, m+1, last, x);
        else return tim_vt(a, first, m-1, x);
    }
}

int main()
{
    printf("\n Nhap x = "); scanf("%d", &x);
    printf(" Vi tri phan tu can tim: %d", tim_vt(a,0,n-1,x));
}