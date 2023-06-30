// Tim phan tu lon nhat nhung be hon hoac ban x
#include <bits/stdc++.h>
int a[] = {18,20,22,23,45,67,69};
int n = sizeof(a)/sizeof(a[0]);
int x;

int tim(int f, int l, int x)
{
    if (x < a[0]) return -1;
    if (a[n-1] <= x) return a[n-1];

    int m = (f+l)/2;
    if (x == a[m]) return a[m];
    else
    {
        if (x > a[m])
        {
            if (x < a[m+1]) return a[m];
            else return tim(m+1, l, x);
        }
        else return tim(f, m-1, x);
    }
}

int main()
{
    printf("\n Nhap x = "); scanf("%d", &x);
    printf(" %d", tim(0, n-1, x));
}