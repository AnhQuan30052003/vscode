// Liệu kê dãy n bit nhị phân
#include <iostream>
using namespace std;

void NhiPhan(int vt, int n, int a[]) {
    if (vt == n) {
        for (int i = 0; i < n; i++)
            cout << a[i];
        cout << endl;
        return;
    }
    a[vt] = 0; NhiPhan(vt+1, n, a);
    a[vt] = 1; NhiPhan(vt+1, n, a);
}

int main() {
    int n;
    cin >> n;
    int a[n];
    NhiPhan(0, n, a);
}