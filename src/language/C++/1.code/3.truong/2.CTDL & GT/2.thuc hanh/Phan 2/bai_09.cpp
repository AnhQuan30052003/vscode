// Liệt kê hoán vị
#include <iostream>
using namespace std;

int n;

// Ham hoa vi
void HoanVi(int vt, int tt[], int a[]) {
    for (int i = 1; i <= n; i++) {
        if (tt[i] != 1) {
            tt[i] = 1;
            a[vt] = i;
            if (vt == n-1) {
                for (int i = 0; i < n; i++)
                    cout << a[i];
                cout << endl;
            }
            else HoanVi(vt+1, tt, a);
            tt[i] = 0;

        }
    }
}

int main() {
    cin >> n;
    int tt[n+1], a[n];
    HoanVi(0, tt, a);
}