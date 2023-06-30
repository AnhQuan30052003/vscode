#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int x[4], y[4];

bool KiemTraKhacNhau() {
	for (int i = 0; i < 3; i++)
		for (int j = i+1; j < 4; j++)
			if (x[i] == x[j] && y[i] == y[j])
				return true;
	return false;
}

bool HinhVuong() {
	int a = 0;
	double KC[6];
	if (!KiemTraKhacNhau()) {
		for (int i = 0; i < 3; i++)
			for (int j = i+1; j < 4; j++) {
				KC[a] = sqrt(pow((x[j] - x[i]),2) + pow((y[j] - y[i]),2));
				++a;
			}
		sort(KC, KC+6, greater<double>());
		if (KC[0] == KC[1] && (KC[2] + KC[3] + KC[4] + KC[5])/4 == KC[2])
			return true;
	}
	return false;
}

int main() {
	for (int i = 0; i < 4; i++)
		cin >> x[i] >> y[i];

	if (HinhVuong())
		cout << "YES";
	else
		cout << "NO";
}