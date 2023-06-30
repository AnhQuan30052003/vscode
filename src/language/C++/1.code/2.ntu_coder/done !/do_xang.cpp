#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int a[n-1];
	for (int i = 0; i < n-1; i++)
		cin >> a[i];
	
	int b[n];
	for (int i = 0; i < n; i++)
		cin >> b[i];

	int tien = 0;
	int phi_xang = b[0];
	for (int i = 0; i < n-1; i++) {
		if (b[i] < phi_xang) phi_xang = b[i];
		tien += a[i] * phi_xang;
	}
	cout << tien;
}