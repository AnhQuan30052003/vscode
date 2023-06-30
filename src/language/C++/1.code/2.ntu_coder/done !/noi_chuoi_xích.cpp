// Noi chuoi xich 
#include <iostream>
#include <algorithm>
using namespace std;

int ChuoiXich(int a[], int n) {
    sort(a, a+n);
    if (a[n-1] == 0) return 0;
    --n;
    int i = 0, chuoi = 0;
    while (n > 0) {
        --a[i];
		++chuoi;
        if (a[i] == 0) {
            ++i;
            n -= 2;
        }
        else --n;
    }
    return chuoi;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << ChuoiXich(a, n);
}