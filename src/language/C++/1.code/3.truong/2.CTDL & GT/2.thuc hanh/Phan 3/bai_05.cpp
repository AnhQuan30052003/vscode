// Nhập mảng gồm n số nguyên đã sắp xếp tăng dần. Nhập vào số x. Chèn x vào mảng mà vẫn bảo đảm tính chất tăng dần của mảng
#include <iostream>
using namespace std;

void Chen(int a[], int& n, int x) {
    if (x > a[n-1]) {
        a[n] = x;
    }
    else if (x < a[0]) {
        for (int i = n; i > 0; i--) {
            a[i] = a[i-1];
        }
        a[0] = x;
    }
    else {
        int vt;
        for (int i = n-1; i > 0; i--) {
            if (x < a[i] && x > a[i-1]) {
                vt = i;
                break;
            }
        }
        for (int i = n; i > vt; i--) {
            a[i] = a[i-1];
        }
        a[vt] = x;
    }
    n += 1;
}

int main() {
    int n, x;
    int a[100];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> x;
    Chen(a, n, x);
    for (int i = 0; i < n; i++) {
        cout << a[i] << ' ';
    }
}