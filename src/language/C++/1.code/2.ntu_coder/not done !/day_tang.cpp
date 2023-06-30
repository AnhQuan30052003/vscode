#include <iostream>
using namespace std;

#define M 10001

int n;
int a[M];

int main() {
    cin >> n;
    int dem = 0, vt;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (i > 0) {
            if (a[i] > a[i-1]) dem += 1;
            else vt = i+1;
        }
    }

    if (dem == n-1 || dem == n-3 || dem == 0) cout << -1;
    else if (dem == n-2) {
        if (a[0] > a[n-1]) cout << vt;
        else cout << -1;
    }
}