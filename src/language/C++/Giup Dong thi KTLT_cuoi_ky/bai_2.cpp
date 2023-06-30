#include <iostream>
using namespace std;

int x[11] = {0};

void KhacNhau(int a[], int l, int r) {
	if (l > r) return;
	int k = (l+r)/2;
	x[a[k]] = 1;
	KhacNhau(a, l, k-1);
	KhacNhau(a, k+1, r);
}

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	KhacNhau(a, 0, n-1);
	int dem = 0;
	for (int i = 0; i < 11; i++) {
		if (x[i] == 1) dem += 1;
	}
	cout << dem;
}