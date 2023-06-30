// Dãy ngoặc đúng - Stack
#include <iostream>
#include <stack>
using namespace std;

short dem = 0;

bool KiemTra(short a[], short n) {
    stack<short> s;
    for (short i = 0; i < n; i++) {
        if (a[i] == 0) s.push(a[i]);
        else if (s.size() > 0) s.pop();
        else return false;
    }
    if (s.size() > 0) return false;
    return true;
}

void XuatKetQua(short a[], short n) {
    if (KiemTra(a, n)) {
        dem += 1;
        for (short i = 0; i < n; i++) {
            a[i] == 0 ? cout << '(' : cout << ')';
        }
        cout << endl;
    }
}

void Thu(short vt, short a[], short n) {
    for (short i = 0; i <= 1; i++) {
        a[vt] = i;
        if (vt == n-1) XuatKetQua(a, n);
        else Thu(vt+1, a, n);
    }
}

int main() {
    system("cls");
    short n;
    cin >> n;
    short a[n];
    a[0] = 0;
    Thu(1, a, n);
    cout << dem;
}