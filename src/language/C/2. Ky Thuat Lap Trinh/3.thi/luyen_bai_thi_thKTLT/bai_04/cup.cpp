#include <bits/stdc++.h>
using namespace std;

fstream file;

int n;
int a[100];
int T[100];

void du_lieu()
{
    file.open("thong_tin.inp", ios::in);
    file >> n;
    for (int i = 1; i <= n; i++) file >> a[i];
    file.close();
}

void quick_sort(int a[], int f, int l)
{
    int left = f, right = l;
    int x = a[(f+l)/2];

    while (left <= right)
    {
        while (a[left] > x && left < l) left++;
        while (a[right] < x && right > f) right--;

        if (left <= right)
        {
            int x = a[left];
            a[left] = a[right];
            a[right] = x;
            
            left++;
            right--;
        }
    }

    if (f < right) quick_sort(a, f, right);
    if (left < l) quick_sort(a, left, l);
}

int tinh_tien()
{
    int tong_tien = 0;
    int tien_giam;

    T[1] = a[1];
    for (int i = 2; i <= n; i++)
    {
        tien_giam = ceil(T[i-1] / 2);
        T[i-1] = T[i-1] - tien_giam;
        if (tien_giam > a[i]) T[i] = 0;
        else T[i] = a[i];
    }

    for (int i = 1; i <= n; i++)
        tong_tien += T[i];

    return tong_tien;
}

int main()
{
    du_lieu();
    quick_sort(a, 1, n);
    cout << "\n So tien phai tra: " << tinh_tien();
}