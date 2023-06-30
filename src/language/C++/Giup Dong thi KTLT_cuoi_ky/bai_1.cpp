#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int DemChan(int a[], int l, int r) {
    if (l > r) return 0;
    int k = (l+r)/2;
    if (a[k] % 2 == 0) return 1 + DemChan(a, l, k-1) + DemChan(a, k+1, r);
    return DemChan(a, l, k-1) + DemChan(a, k+1, r);
}

int MinMang(int a[], int m, int l, int r) {
    if (l > r) return m;
    int k = (l+r)/2;
    if (a[k] < m) return min(MinMang(a, a[k], l, k-1), MinMang(a, a[k], k+1, r));
    return min(MinMang(a, m, l, k-1), MinMang(a, m, k+1, r));
}

int main() {
    ifstream file ("INPUT.DAT");
    int n;
    file >> n;
    int arr8[n];
    for (int i = 0; i < n; i++) {
        file >> arr8[i];
    }
    cout << DemChan(arr8, 0, n) << endl;
    cout << MinMang(arr8, arr8[0], 1, n);
}