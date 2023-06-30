#include <iostream>
using namespace std;

void VeKimCuong(int n) {
	int ve_hinh = 1, dem = 1;
	int diem = n/2 + 1;
	for (int dong = 1; dong <= n; dong++) {
		for (int i = 1; i <= n; i++) {
			if (i > (n - ve_hinh)/2 && dem <= ve_hinh) {
				++dem;
				cout << 'D';
			}
			else cout << '*';
		}
		dem = 1;
		if (dong < diem) ve_hinh += 2;
		else ve_hinh -= 2;
		cout << (dong == n ? "" : "\n");
	}
}

int main() {
	int n;
	cin >> n;
	VeKimCuong(n);
}