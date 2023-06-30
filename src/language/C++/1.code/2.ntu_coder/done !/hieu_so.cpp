#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];

	int Min = a[0], Max = 0, hieu;
	for (int i = 0; i < n; i++) {
		Min = min(Min, a[i]);
		hieu = a[i] - Min;
		Max = max(Max, hieu);
	}
	cout << Max;
}