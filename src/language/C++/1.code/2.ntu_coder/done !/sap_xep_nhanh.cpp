// Sap xep nhanh - Phan hach mang !
#include <iostream>
using namespace std;

int main() {
    short n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int pi = a[n-1];
    int k = 0;
    while (k < n && a[n-1] == pi) {
        for (int i = k; i < n; i++) {
            if (a[i] <= pi) {
                swap(a[i], a[k]);
                ++k;
                break;
            }
        }
    }

    int tt[n] = {0};
    for (int i = n-1; i >= 0; i--) {
        if (a[i] == pi) {
            tt[i] = 1;
            break;
        }
    }

    for (int i = 0; i < n; i++) {
        if (tt[i] != 1) cout << a[i];
        else cout << "[" << a[i] << "]";
        cout << " ";
    }
}