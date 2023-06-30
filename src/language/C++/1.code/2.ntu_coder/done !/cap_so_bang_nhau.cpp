#include <iostream>
#include <algorithm>
using namespace std;

long long XuLyDem(int dem) {
	if (dem == 0) return 0;
	return dem + XuLyDem(dem-1);
}

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];

	sort(a, a+n);
	int chon = a[0];
	int dem = 1;
	long long tong = 0;

	for (int i = 1; i < n; i++) {
		if (a[i] != chon) {
			tong += XuLyDem(dem) - dem;
			dem = 1;
			chon = a[i];
		}
		else ++dem;
		if (i == n-1)
			tong += XuLyDem(dem) - dem;
	}
	cout << tong;
}