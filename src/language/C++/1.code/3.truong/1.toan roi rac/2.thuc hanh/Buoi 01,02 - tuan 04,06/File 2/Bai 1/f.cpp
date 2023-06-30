#include <iostream>
using namespace std;

long long ToHop(int k, int n) {
	long long kqt = 1, kqm = 1, kq = 1;
	long long a, b;
	if (k >= (n-k)) {
		a = k;
		b = n-k;
		for (int i = n; i > a; i--) {
			kqt *= i;
		}
		for (int i = 1; i <= b; i++) {
			kqm *= i;
		}
		return kqt/kqm;
	}
	else {
		a = (n-k);
		b = k;
		for (int i = n; i > a; i--) {
			kq *= i;
		}
		return kq;
	}
}

int main() {
    cout << ToHop(4,6) * ToHop(4,6) * ToHop(2,4) * 2;
}