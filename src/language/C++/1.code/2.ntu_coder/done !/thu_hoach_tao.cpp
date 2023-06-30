#include <iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	int a[n+1];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	a[n] = 0;

	int thu = 0, du = 0;
	for (int i = 0; i < n+1; i++) {
		// Truong hop co qua du truoc do
		if (du > 0) {
			if (du <= m) {
				int tong = du + a[i];
				if (tong <= m) {
					thu += tong;
					du = 0;
				}
				else {
					thu += m;
					du = tong - m;
				}
			}
			else {
				thu += m;
				du = a[i];
			}
		}
		// Truong hop khong co qua nao du truoc do
		else {
			if (a[i] <= m)
				thu += a[i];
			else {
				thu += m;
				du = a[i] - m;
			}
		}
	}
	cout << thu;
}