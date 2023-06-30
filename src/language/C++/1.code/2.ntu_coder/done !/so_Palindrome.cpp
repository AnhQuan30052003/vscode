#include <iostream>
using namespace std;

using ll = long long;

bool Pali(ll n) {
    ll m = n;
    ll tong = 0;
    while (m > 0) {
        tong = tong*10 + m % 10;
        m /= 10;
    }
    if (tong == n)
        return true;
    return false;
}

int main() {
    int n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
        
    for (int i = 0; i < n; i++)
        if (Pali(a[i]))
            cout << a[i] << ' ';
}