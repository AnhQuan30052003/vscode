#include <iostream>
#include <windows.h>
using namespace std;

int met;
int tong_buoc_di_thu = 0;
int di_thu[100];

// Kiem tra & Hien thi
void kiem_tra() {
	Sleep(1000);
	if (tong_buoc_di_thu == met) {
		int i = 0;
		cout << endl;
		while (di_thu[i] != 0) cout << di_thu[i++] << ' ';
	}
}

// Thu nghiem buoc di
void thu(int vt) {
	for (int i = 1; i <= 2; i++) {
		di_thu[vt] = i;
		tong_buoc_di_thu += i;
		if (met - tong_buoc_di_thu > 0) thu(vt+1);
		else kiem_tra();
		tong_buoc_di_thu -= i;
		di_thu[vt] = 0;
	}
}

// Ham chinh
int main() {
	cout << "Nhap chieu dai quang duong: ";
	cin >> met;
	cout << "Robot co the di chuyen voi so buoc nhu sau: ";
	thu(0);
}