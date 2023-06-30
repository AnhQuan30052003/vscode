// So ban be //
#include <iostream>
using namespace std;

int TongUocSo(int x) {
	int tong = 0;
	for (int i = 1; i <= x/2; i++)
		if (x % i == 0)
			tong += i;
	return tong;
}

bool SoBanBe(int a, int b) {
	if (TongUocSo(a) == b && TongUocSo(b) == a)
		return true;
	return false;
}

int main() {
	int a, b;
	cin >> a >> b;
	if (SoBanBe(a, b))
		cout << "YES";
	else
		cout << "NO";
}