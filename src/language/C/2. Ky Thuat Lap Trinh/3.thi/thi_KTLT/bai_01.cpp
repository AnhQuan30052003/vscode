#include <iostream>
using namespace std;

int n;

int tich(int n) {
	if (n == 1) return 1;
	return n * tich(n-1);
}

float tinh_S(int n) {
	if (n == 1) return 1;
	return 1.0 / tich(n) + tinh_S(n-1);
}

int main() {
	cout << "Nhap n = "; cin >> n;
	cout << "Ket qua: " << tinh_S(n);
}