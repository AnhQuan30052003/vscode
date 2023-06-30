#include <iostream>
using namespace std;

int TongSoBiaUong(int n) {
	int m = n;
	int tong = 0;
	while (m - 10 >= 0) {
		tong += 3;
		m -= 7;
	}
	return tong + n;
}

int main() {
	int n;
	cin >> n;
	cout << TongSoBiaUong(n);
}