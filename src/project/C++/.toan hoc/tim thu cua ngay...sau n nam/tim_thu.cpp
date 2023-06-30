// Tim thu cua ngay...sau n nam
#include <iostream>
using namespace std;

int main() {
	int thu, ngay, thang, nam, n;
	cin >> thu >> ngay >> thang >> nam >> n;

	int nam_nhuan = 0, ket_qua, x;
	if (thang > 2) x = nam+1;
	else x = nam;

	for (int i = x; i <= nam+n; i++) {
		if (i % 100 == 0) {
			if (i % 400 == 0) ++nam_nhuan;
		}
		else if (i % 4 == 0) ++nam_nhuan;
	}

	ket_qua = (thu + n + nam_nhuan) % 7;
	if (ket_qua == 0) cout << thu + n + nam_nhuan;
	else cout << ket_qua;
}