// LIệt kê tập con k phân tử n
#include <iostream>
using namespace std;

int n, k;

void KetQua(int a[]) {
    for (int i = 0; i < k-1; i++)
        if (a[i] >= a[i+1]) return;
            
    for (int i = 0; i < k; i++)
        cout << a[i];
    cout << endl;
}

void Thu(int vt, int a[]) {
    for (int i = 1; i <= n; i++) {
        a[vt] = i;
        if (vt == k-1) KetQua(a);
        else Thu(vt+1, a);
    }
}

int main() {
    cin >> n >> k;
    int a[k];
    Thu(0, a);
}