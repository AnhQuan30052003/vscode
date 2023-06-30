#include <iostream>
using namespace std;

void nhi_phan(int n) {
	if (n <= 1) {
		cout << n;
		return;
	}
	nhi_phan(n/2);
	cout << n % 2;
}

int main() {
	int n;
	cout << "Nhap n = ";
	cin >> n;
	nhi_phan(n);
}