#include <iostream>
#include <algorithm>
using namespace std;

int SoOCam(int *a, int n, int m) {
	if (m == 1) return 0;
	
	sort(a, a+n, greater<int>());
	int so_lo = 0;
	for (int i = 0; i < n; i++) {
		so_lo += a[i];
		if (so_lo >= m)
			return i+1;
		else
			--so_lo;
	}
	return -1;
}

int main() {
	// n la so o cam
	// m la so thiet bi
	int n, m;
	cin >> n >> m;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];

	cout << SoOCam(a, n, m);
}