#include <iostream>
#include <algorithm>
using namespace std;

int n, k;
int a[2000];

int main() {
    //Input
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Xu ly
    sort(a, a+n);
    int thang_may = 1, thoi_gian = 0;
    int dem, x = n-1;
    
    while (n > 0) {
        if (n >= k) dem = k;
        else dem = n;

        for (int i = 1; i <= dem; i++) {
            if (a[x] != thang_may) {
                int tinh = a[x] - thang_may;
                if (tinh < 0) tinh *= -1;
                thoi_gian += tinh;
                thang_may = a[x];
            }
            x -= 1;
        }

        if (thang_may != 1) {
            thoi_gian += thang_may - 1;
            thang_may = 1;
        }
        n -= dem;
    }

    // Output
    cout << thoi_gian;
}