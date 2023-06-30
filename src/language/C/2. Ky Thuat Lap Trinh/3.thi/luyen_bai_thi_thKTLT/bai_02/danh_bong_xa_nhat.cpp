#include <bits/stdc++.h>
using namespace std;

fstream file;

int n;
int a[100];

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
        while (a[left] < x && left < l) left++;
        while (a[right] > x && right > f) right--;

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

int so_lan_danh_bong_xa_nhat()
{
    int dem = 0;
    int max = a[n];
    for (int i = 1; i <= n; i++)
        if (a[i] == a[n]) dem++;

    return dem;
}

int main()
{
    du_lieu();
    quick_sort(a, 1, n);
    cout << "\n So lan danh bong xa nhat: " << so_lan_danh_bong_xa_nhat();
}