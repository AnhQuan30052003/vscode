#include <iostream>
#include <cmath>
using namespace std;

void PhanTichSo(int n) {
	if (n == 1) {
		cout << n;
		return;
	}
	for (int i = 2; i <= sqrt(n); i++) {
		while (n % i == 0) {
			cout << i;
			n /= i;
			if(n != 1)
				cout << '*';
		}
	}
	if (n != 1)
		cout << n;	
}

int main() {
	int n;
	cin >> n;
	PhanTichSo(n);
}