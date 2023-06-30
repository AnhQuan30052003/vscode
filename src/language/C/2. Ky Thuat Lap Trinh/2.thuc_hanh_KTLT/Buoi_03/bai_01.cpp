//Bài 1: In ra giá trị lớn nhất của một mảng các số tự nhiên cho trước.
#include <bits/stdc++.h>

int a[] = {1,2,3};
int max = a[0]; // max = 1

int n = sizeof(a)/sizeof(a[0]); // n = 3

int max_mang(int vt, int max)
{
    if (vt == n) return max;
    else if (a[vt] > max) return max_mang(vt+1, max = a[vt]);
    else return max_mang(vt+1, max);
}

int main()
{
    printf("\n Gia tri lon nhat trong mang a[] la: %d", max_mang(0, max));
}