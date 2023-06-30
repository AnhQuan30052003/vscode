#include <iostream>
using namespace std;

int main() {
	long long n;
	cin >> n;

	int tong = 0;
	long long m = n;
	while (m > 0) {
		tong += m % 10;
		m /= 10;
	}
	if (n % tong == 0)
		cout << 1;
	else
		cout << 0;
}