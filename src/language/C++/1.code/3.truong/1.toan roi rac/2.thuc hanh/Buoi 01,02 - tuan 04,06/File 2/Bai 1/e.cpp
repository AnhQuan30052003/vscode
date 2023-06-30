#include <iostream>
#include <cmath>
using namespace std;

long double ToHop(int k, int n) {
	long long kqt = 1, kqm = 1, kq = 1;
	long long a, b;
	if (k > (n-k)) {
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
    cout << to_string(ToHop(3,6)*pow(26,3) * pow(10,3));
}