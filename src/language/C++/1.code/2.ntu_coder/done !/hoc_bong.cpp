#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Input
    int n, m;
    cin >> n >> m;
    float a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int dem = 0;
    sort(a, a+n, greater<float>());
    for (int i = 0; i < n; i++) {
        if (a[i] >= 7 && m > 320) {
            dem += 1;
            if (a[i] >= 8) m -= 500;
            else m -= 320;
        }
        else break;
    }

    // Output
    cout << dem;
}