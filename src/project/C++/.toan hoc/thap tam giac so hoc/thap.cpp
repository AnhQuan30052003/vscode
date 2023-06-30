/// Tam giac so doi xung
#include <iostream>
#include <windows.h>
using namespace std;

// Ham xu ly khoang cach
void InCach(int x) {
	for (int i = 1; i <= x; i++)
		cout << ' ';
}

// Ham dam bao so in ra luon la tu 0 - 9
int HienThiSo(int x) {
	if (x >= 10) return x % 10;
	else return x;
}

// Ham xu ly viec in sach
void InSo(int x) {
	int so_giua = x/2 + 1;	// lay gia tri cua so o giua dong
	bool so_chan = false; 	// kiem tra xem dong dang xu ly la chan lay he le
	if (x % 2 == 0)
		so_chan = true;
	int max = (so_chan ? 2 : 1);

	int m = x;				// Tam thoi lay gia tri de tien hanh in
	bool chieu = false;		// Chieu day tang hay giam
	int dem = 0;

	for (int i = 1; i <= x; i++)
		if (m == so_giua) {
			cout << HienThiSo(m) << (i == x ? "" : " ");
			if (++dem == max) {
				chieu = true;
				++m;
			}
		}
		else {
			cout << HienThiSo(m) << (i == x ? "" : " ");
			if (chieu) ++m;
			else --m;
		}
}

// Ham ve tam giac
void VeHinh(int n) {
	system("cls");
	for (int dong = 1; dong <= n; dong++) {
		Sleep(100);
		InCach(n-dong);
		InSo(dong);
		cout << (dong == n ? "" : "\n");
	}
}

// Ham chinh
int main() {
	int n;
	cout << "Nhap kich thuoc tam giac: ";
	cin >> n;

	while (true) {
		VeHinh(n);
		Sleep(500);
	}
}