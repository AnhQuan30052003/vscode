#include <bits/stdc++.h>
using namespace std;

int n, k;
int a[100];
int kiem_tra_khong_co = 0;

void quick_sort(int f, int l)
{
    int left = f, right = l;
    int x = a[(f+l)/2];

    while (left <= right)
    {
        while (a[left] < x && left < l )left++;
        while (a[right] > x && right > f) right--;

        if (left <= right)
        {
            swap(a[left], a[right]);
            left++;
            right--;
        }
    }

    if (left < l) quick_sort(left, l);
    if (right > f) quick_sort(f, right);
}

void tap_dat()
{
    quick_sort(1, n);

    int vi_tri_phan_tu_cuoi_thoa = 0;
    for (int i = 1; a[i] <= k && i <= n; i++)
        vi_tri_phan_tu_cuoi_thoa = i;

    if (vi_tri_phan_tu_cuoi_thoa != 0) kiem_tra_khong_co = 1;

    for (int i = 1; i <= vi_tri_phan_tu_cuoi_thoa; i++)
        if (a[i] == a[vi_tri_phan_tu_cuoi_thoa])
            cout << ' ' << a[i];
}

int main()
{
    cout << "\n Nhap n & k = "; cin >> n >> k;
    cout << " Nhap so diem moi lan tap: ";
    for (int i = 1; i <= n; i++) cin >> a[i];
    tap_dat();
    if (kiem_tra_khong_co == 0) cout << " Khong co lan nao tap dat !";
}