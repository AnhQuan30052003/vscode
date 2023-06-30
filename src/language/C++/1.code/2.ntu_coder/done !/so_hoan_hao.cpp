#include <iostream>
using namespace std;

string KetQua(int n) {
	int tong = 0;
	for (int i = 1; i <= n/2; i++)
		if (n % i == 0)
			tong += i;
	if (tong == n) return "YES";
	return "NO";
}

int main() {
	int n;
	cin >> n;
	cout << KetQua(n);
}