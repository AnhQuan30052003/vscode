#include <iostream>
using namespace std;

bool PTB2(int a, int b, long long c) {
	double den_ta = b*b - 4*a*c;
	if (den_ta >= 0) return true;
	return false;
}

bool ToanAnh(int a, int b, long long c) {
	for (int i = -1; i <= 1; i++)
		if (!PTB2(a, b, c-i))
			return false;
	return true;
}

int main() {
	int a, b;
	long long c;
	cout << "Nhap 3 he so a, b, c: ";
	cin >> a >> b >> c;
	if (ToanAnh(a, b, c))
		cout << "Toan anh";
	else
		cout << "Khong toan anh";
}