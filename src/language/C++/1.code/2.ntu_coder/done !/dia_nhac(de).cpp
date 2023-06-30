#include <iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	// Lay so lan lay
	int lay[m];
	for (int i = 0; i < m; i++) {
		cin >> lay[i];
	}

	// Danh dau trang thai
	int tt[n+1] = {0};
	for (int i = m-1; i >= 0; i--) {
		if (tt[lay[i]] != 1) {
			cout << lay[i] << ' ';
			tt[lay[i]] = 1;
		}
	}

	// Xuat ket qua
	for (int i = 1; i <= n; i++) {
		if (tt[i] != 1)
			cout << i << ' ';
	}
}