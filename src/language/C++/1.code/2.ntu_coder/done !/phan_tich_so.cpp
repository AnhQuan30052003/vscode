// Phan tich so bang de quy
#include <iostream>
using namespace std;

void PhanTichSo(int& n) {
	for (int i = 2; i <= n; i++) {
		if (n % i == 0) {
			cout << i;
			if (n > i) cout << '*';
			else n = 0;
			n /= i;
			PhanTichSo(n);
		}
	}
}

int main() {
	int n;
	cin >> n;
	PhanTichSo(n);
}