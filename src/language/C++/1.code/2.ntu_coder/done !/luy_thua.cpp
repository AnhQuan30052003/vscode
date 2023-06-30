#include <iostream>
using namespace std;

using ll = long long;

ll LuyThua(ll x, ll i) {
	if (i == 1) return x;
	ll t = LuyThua(x, i/2);
	ll h = (t*t) % 10000;
	if (i % 2 == 1) h *= x;
	return h % 10000;
}

int main() {
	ll x, n;
	cin >> x >> n;
	cout << LuyThua(x, n);
}