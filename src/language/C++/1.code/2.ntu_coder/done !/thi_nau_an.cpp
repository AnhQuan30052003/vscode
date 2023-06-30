#include <iostream>
using namespace std;

int Tim(int a[], int n, int x) {
    int f = 0, e = n;
    while (f <= e) {
        int m = (f+e)/2;
        if ((x > a[m-1] && x < a[m]) || x == a[m] || (m == 0 && x < a[m]))
            return m+1;
        else if (x > a[m]) f = m+1;
        else e = m-1;
    }
    return f;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (i > 0) a[i] += a[i-1];
    }
    
    int m;
    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    for (int i = 0; i < m; i++) {
        cout << Tim(a, n-1, b[i]) << ' ';
    }
}