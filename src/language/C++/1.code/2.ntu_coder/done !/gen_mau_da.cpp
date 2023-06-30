#include <iostream>
using namespace std;

short n;
char b[20], m[20], c[20];

// Kiểm tra gen
void Gen(int vt) {
    if (vt == n) {
        for (short i = 0; i < n; i++) {
            cout << c[i] << (i == n-1 ? "\n" : "");
        }
        return;
    }

    if (b[vt] == m[vt]) {
        c[vt] = b[vt];
        Gen(vt+1);
    }
    else if (b[vt] < m[vt]) {
        c[vt] = b[vt];
        Gen(vt+1);
        c[vt] = m[vt];
        Gen(vt+1);
    }
    else {
        c[vt] = m[vt];
        Gen(vt+1);
        c[vt] = b[vt];
        Gen(vt+1);
    }
}

int main() {
    // Nhập giá trị input
    cin >> n;
    for (short i = 0; i < n; i++) {
        cin >> b[i];
    }
    for (short i = 0; i < n; i++) {
        cin >> m[i];
    }

    int a = 1;
    for (short i = 0; i < n; i++) {
        if (b[i] != m[i]) a *= 2;
    }

    // Output
    cout << a << endl;
    Gen(0);
}