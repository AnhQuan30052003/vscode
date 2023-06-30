#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Intput
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a+1, a+n);
    int tong = 0;
    for (int i = 0; i < n; i++) {
        if (k > 0 && i > 0) {
            tong -= a[i];
            k -= 1;
        }
        else tong += a[i];
    }
    
    // Output
    cout << tong;
}