#include <iostream>
using namespace std;

void nhi_phan(long long n) {
	if (n <= 1) {
		cout << n;
		return;
	}
	nhi_phan(n/2);
	cout << n % 2;
}

int main() {
	long long n;
	cin >> n;
	nhi_phan(n);
}