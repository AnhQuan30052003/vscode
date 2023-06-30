#include <iostream>
using namespace std;

void SapXep(int* a, int* b, int n) {
	for (int i = 0; i < n-1; i++)
		for (int j = i+1; j < n; j++)
			if ((b[i] < b[j]) || (b[i] == b[j] && a[i] < a[j])) {
				swap(a[i], a[j]);
				swap(b[i], b[j]);
			}
}

int main() {
	int n;
	cin >> n;
	int a[n], b[n];
	for (int i = 0; i < n; i++)
		cin >> a[i] >> b[i];

	SapXep(a, b, n);
	int tong = a[0], dem_them = b[0];
	if (dem_them != 0)
		for (int i = 1; i < n; i++) {
			--dem_them;
			tong += a[i];
			dem_them += b[i];
			if (dem_them == 0) break;
		}
	cout << tong;
}