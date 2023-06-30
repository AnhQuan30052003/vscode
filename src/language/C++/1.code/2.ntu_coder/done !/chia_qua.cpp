#include <iostream>
using namespace std;

int tt[10];
int tong_1 = 0, tong_2 = 0;

void KiemTra(int a, int b) {
	if (a == b) {
		cout << "YES";
		exit(0);
	}
}

void Thu(int vt, int a[], int n) {
	for (int i = 1; i <= 2; i++) {
		tt[vt] = i;
		if (i == 1) tong_1 += a[vt];
		if (i == 2) tong_2 += a[vt];
		if (vt < n-1) Thu(vt+1, a, n);
		else KiemTra(tong_1, tong_2);
		if (i == 1) tong_1 -= a[vt];
		if (i == 2) tong_2 -= a[vt];
		tt[vt] = 1;
	}
}

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	Thu(0, a, n);
	cout << "NO";
}