// Vat sua bo //
#include <iostream>
#include <algorithm>
using namespace std;

int SuaVatDuoc(int* a, int n) {
    sort(a, a+n, greater<int>());
    int sua_vat;
    int tong_sua = 0;
    for (int i = 0; i < n; i++) {
        sua_vat = a[i] - i;
        if (sua_vat < 0)
            continue;
        tong_sua += sua_vat;
    }
    return tong_sua;
}

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << SuaVatDuoc(a, n);
}