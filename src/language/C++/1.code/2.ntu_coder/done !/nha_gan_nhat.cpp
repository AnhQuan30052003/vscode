// Nha gan nhat //
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int KhoangCachMin(int* a, int n) {
	sort(a, a+n);
	int min = a[1] - a[0];
	for (int i = 1; i < n-1; i++) {
		int x = abs(a[i+1] - a[i]);
		if (x < min)
			min = x;
	}
	return min;
}

int main() {
	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cout << KhoangCachMin(a, n);
}