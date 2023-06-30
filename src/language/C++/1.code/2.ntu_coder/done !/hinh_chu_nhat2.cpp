#include <iostream>
using namespace std;

int x[4], y[4];

void SapXep() {
	for (int i = 0; i < 2; i++)
		for (int j = i+1; j < 3; j++)
			if (x[i] > x[j]) {
				swap(x[i], x[j]);
				swap(y[i], y[j]);
			}
}

int main() {
	for (int i = 0; i < 3; i++)
		cin >> x[i] >> y[i];

	SapXep();
	if (x[1] == x[0]) {
		x[3] = x[2];
		y[3] = y[0] + y[1] - y[2];
	}
	if (x[1] == x[2]) {
		x[3] = x[0];
		y[3] = y[1] + y[2] - y[0];
	}
	cout << x[3] << ' ' << y[3];
}