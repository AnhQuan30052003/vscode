#include <iostream>
using namespace std;

using ll = long long;

long long int TienMua(ll m, ll n, ll t) {
	long long int tong = 0;
	int dem = 0;
	while (n > 0) {
		tong += t;
		++dem;
		if (dem == m) {
			--n;
			dem = 0;
		}
		--n;
	}
	return tong;
}
 
int main() {
	long long m, n, t;
	cin >> m >> n >> t;
	cout << TienMua(m, n, t);
}