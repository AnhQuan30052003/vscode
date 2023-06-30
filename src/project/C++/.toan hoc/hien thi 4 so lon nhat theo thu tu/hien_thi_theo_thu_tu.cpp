// Nhap mang so nguyen 1 chieu (so luong >= 10) sau do hien thi ra 4 so nguyen lon nhat theo thu tu da nhap
#include <iostream>
using namespace std;

void SapXepGiaTriMangGiamDan(int* a, int* cs, int n) {
	for (int i = 0; i < n-1; i++) {
		for (int j = i+1; j < n; j++)
			if (a[cs[i]] < a[cs[j]])
				swap(cs[i], cs[j]);
	}
}

void SapXepChiSoTangDan(int* a, int* cs) {
	for (int i = 0; i < 3; i++) {
		for (int j = i+1; j < 4; j++)
			if (cs[i] > cs[j])
				swap(cs[i], cs[j]);
	}
}

int main() {
	int n;
	cout << "Kich thuoc mang: ";
	cin >> n;

	int a[n], cs[n];
	for (int i = 0; i < n; i++) {
		cs[i] = i;
		cin >> a[i];
	}

	SapXepGiaTriMangGiamDan(a, cs, n);
	SapXepChiSoTangDan(a, cs);
	for (int i = 0; i <= 3; i++) {
		cout << a[cs[i]] << (i == 3 ? "" : " ");
	}
}