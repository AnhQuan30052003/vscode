#include <bits/stdc++.h>
using namespace std;

int n, k;
int a[100];

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
            swap(a[left], a[right]);
            left++;
            right--;
        }
    }

    if (f < right) quick_sort(a, f, right);
    if (left < l) quick_sort(a, left, l);
}

int dem_linh()
{
    int dem = 0;
    for (int i = 0; i < n; i++)
        if (a[i] <= k)
        {
            dem++;
            k--;
        }

    return dem;
}

int main()
{
    cout << "\n Nhap n & k = "; cin >> n >> k;
    cout << " Nhap chieu cao binh linh: ";
    for (int i = 0; i < n; i++) cin >> a[i];
    quick_sort(a, 0, n-1);
    cout << " So binh linh cuu duoc toi da: " << dem_linh();
}