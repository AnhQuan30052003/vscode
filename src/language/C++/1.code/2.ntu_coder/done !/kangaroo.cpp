// Kangagoo
#include <iostream>
using namespace std;
using ll = long long;

ll n, a, b;

ll TinhBoiChung(ll a, ll b) {
    ll temp, n1 = a, n2 = b;
    while (n2 != 0) {
        temp = n1;
        n1 = n2;
        n2 = temp % n1;
    }
    return n1;
}

int Kangaroo() {
    for (int i = n/b; i >= 0; i--)
        if ((n-i*b) % a == 0)
            return i + (n-i*b)/a;
    return -1;
}

int main() {
    cin >> n >> a >> b;
    if (n % TinhBoiChung(a,b) == 0)
        cout << Kangaroo();
    else 
        cout << -1;
}