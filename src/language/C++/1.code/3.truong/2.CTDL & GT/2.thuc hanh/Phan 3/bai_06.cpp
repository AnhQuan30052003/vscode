// Nhập số nguyên n. Dùng mảng, tính và in ra n số fibonacy đầu tiên
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[100];
    a[0] = 0;
    a[1] = 1;
    for (int i = 0; i < n; i++) {
        if (i > 1) a[i] = a[i-1] + a[i-2];
        cout << a[i] << ' ';
    }
}