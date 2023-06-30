// Chuong trinh sap xep cac phan tu trong mang tang dan va van con giu vi tri cu cua chung
// Ap dung ky thuat chi de tri de tim vi tri phan tu can tim
#include <iostream>
using namespace std;

int a[] = {5,3,8,89,56,4,46};
const int n = sizeof(a)/sizeof(int);
int cs[n];

void gan_cs() {
    for (int i = 0; i < n; i++)
        cs[i] = i;
}

void sap_xep() {
    for (int i = 0; i < n-1; i++)
        for (int j = i+1; j < n; j++)
            if (a[i] > a[j]) {
                swap(cs[i], cs[j]);
                swap(a[i], a[j]);
            }
}

int tim(int f, int l, int x) {
    if (x < a[f]) return -1;
    if (x > a[l]) return cs[l];

    int m = (f+l)/2;
    if (x == a[m]) return cs[m];
    else
        if (x > a[m])
            if (x < a[m+1]) return cs[m];
            else return tim(m+1, l, x);
        else return tim (f, m-1, x);
}

int main() {
    for (int i = 0; i < n; i++)
        cout << a[i] << (i == n-1 ? "\n" : " ");

    int x;
    cout << "Nhap phan tu can tim: x = ";
    cin >> x;
    gan_cs();
    sap_xep();
    cout << "Vi tri: " << tim(0, n-1, x) << endl;
}