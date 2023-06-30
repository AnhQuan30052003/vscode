#include <iostream>
using namespace std;

int main() {
	int ngay, thang, nam;
	cin >> ngay >> thang >> nam;

	if (thang == 2) {
		bool nam_nhuan = false;
		if (nam % 100 == 0) {
			if (nam % 400 == 0)
				nam_nhuan = true;
		}
		else if (nam % 4 == 0)
			nam_nhuan = true;

		if (nam_nhuan) {
			if (ngay == 29) {
				ngay = 1;
				++thang;
			}
			else ++ngay;
		}
		else {
			if (ngay == 28) {
				ngay = 1;
				++thang;
			}
			else ++ngay;
		}
	}
	else if (thang == 4 || thang == 6 || thang == 9 || thang == 11) {		// co 30 ngay
		if (ngay == 30) {
			ngay = 1;
			++thang;
		}
		else ++ngay;
	}
	else {	// co 31 ngay
		if (thang == 12) {
			if (ngay == 31) {
				++nam;
				ngay = thang = 1;
			}
			else ++ngay;
		}
		else {
			if (ngay == 31) {
				ngay = 1;
				++thang;
			}
			else ++ngay;
		}
	}

	cout << ngay << ' ' << thang << ' ' <<nam;
}