// Nhập mảng n số nguyên. Đảo ngược mảng và in ra kết quả. Ví dụ: 3 5 4 7 → 7 4 5 3w
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }

    for (int i = 0; i < n; i++) {
        a[i] = b[n-1-i];
    }

    for (int x : a) {
        cout << x << ' ';
    }
}