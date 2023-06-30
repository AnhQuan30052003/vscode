#include <iostream>
using namespace std;

int main() {
	int max = 1000;
	long long dem = 0;
	for (int x = 0; x <= max; x++) {
		for (int y = 0; y <= max; y++) {
			cout << x << ' ' << y << ' ' << max - (x + y) << endl;
			++dem;
		}
	}
	cout << "Co " << dem << " nghiem";
}