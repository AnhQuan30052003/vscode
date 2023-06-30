#include <iostream>
using namespace std;

string KetQua(int n) {
	int tong = 0;
	while (n > 0) {
		tong += n % 10;
		n /= 10;
	}
	if (tong % 10 == 9) return "YES";
	return "NO";
}

int main() {
	int n;
	cin >> n;
	cout << KetQua(n);
}