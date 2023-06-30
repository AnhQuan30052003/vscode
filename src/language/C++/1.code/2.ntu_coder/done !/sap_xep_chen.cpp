#include <iostream>
using namespace std;

int n, vt;
int a[21];

int ViTriCanChen(int x, int ii) {
    int i;
    for (i = 0; i < ii; i++) {
        if (x < a[i]) break;
    }
    return i;
}

void Chen(int x, int ii) {
    for (int i = ii; i > vt; i--) {
        a[i] = a[i-1];
    }
    a[vt] = x;
}

int main() {
    cin >> n;
    a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 1; i < n; i++) {
        vt = ViTriCanChen(a[i], i);
        cout << a[i] << ' ' << vt << endl;
        Chen(a[i], i);
    }
}