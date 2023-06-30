#include <iostream>
#include <cmath>
using namespace std;

bool LT(int x) {
	for (int i = 0; i <= 10000; i++) {
		unsigned long long a = pow(2, i);
		if (a > x) break;
		else if (a == x)
			return true;
	}
	return false;
}

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];

	for (int i = 0; i < n; i++)
		if (LT(a[i]))
			cout << 1 << endl;
		else
			cout << 0 << endl;
}