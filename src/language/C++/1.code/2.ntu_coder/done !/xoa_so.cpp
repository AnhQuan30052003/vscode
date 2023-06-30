#include <iostream>
using namespace std;

using ll = long long;

ll so_chan = 0, so_le = 0;
ll n;
ll hieu_tam;

ll GT(ll x) {
	if (x == hieu_tam) return 1;
	return x * GT(x-1);
}

ll TinhToHop(ll x) {
	hieu_tam = x-2;
	return GT(x)/2;
}

void XuLyNhieuSo() {
	if (so_le != 0 && so_chan != 0) {
		if (so_le % 2 != 0)
			cout << so_le * so_chan;
		else {
			if (so_le == so_chan)
				cout << TinhToHop(so_le) + TinhToHop(so_chan);
			else
				cout << TinhToHop(so_le);
		}
	}
	else if (so_le == 0 && so_chan != 0)
		cout << TinhToHop(so_chan);
	else if (so_chan == 0 && so_le != 0) {
		if (n % 2 == 0)
			cout << TinhToHop(so_le);
		else cout << 0;
	}
}	

int main() {
	cin >> n;
	ll a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] == 0 || a[i] % 2 == 0) ++so_chan;
		else ++so_le;
	}

	if (n == 2) cout << 1;
	else XuLyNhieuSo();
}