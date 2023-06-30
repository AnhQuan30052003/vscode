#include <iostream>
using namespace std;

bool KiemTra(int& dung, int& nam, int& gia, int n, int m) {
	double _dung, _nam;
	_dung = (3*m + 8*gia - 9*n)/6.0;
	_nam = n - gia - _dung;

	if (_dung != int(_dung) || _nam != int(_nam) || _dung <= 0 || _nam <= 0)
		return false;
	dung = _dung;
	nam = _nam;
	return true;
}

int main() {
	int n, m;
	cin >> n >> m;

	bool ket_qua = false;
	int dung, nam, gia = 0;
	while (gia < n) {
		gia += 3;
		if (KiemTra(dung, nam, gia, n, m)) {
			ket_qua = true;
			break;
		}
	}
	if (ket_qua)
		cout << dung << ' ' << nam << ' ' << gia;
	else
		cout << -1;
}