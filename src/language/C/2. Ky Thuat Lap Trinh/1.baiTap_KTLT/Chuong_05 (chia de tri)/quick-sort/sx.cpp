// Ky thuat sap xep nhanh sieu cap 
// Ky thuat nay han che so lan so giua cac so
#include <bits/stdc++.h>

int a[] = {2,5,8,0,4,3,7,5};
int n = sizeof(a)/sizeof(a[0]);

void quick_sort(int f, int l)
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

    if (f < right) quick_sort(f, right);
    if (left < l) quick_sort(left, l);
}

int main()
{
    quick_sort(0, n-1);
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
}