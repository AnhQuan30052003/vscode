// Kiem tra so don dieu ?
#include <iostream>
using namespace std;

int a[20];
int n;
int len_n = 0;

string DonDieu(int *a, int len_n) {
	int don_dieu = 0, khong_don_dieu = 0;
	for (int i = 0; i < len_n-1; i++)
		if (a[i] > a[i+1]) ++don_dieu;
		else ++khong_don_dieu;

	if (don_dieu == len_n-1 || khong_don_dieu == len_n-1) return "Don dieu";
	else return "Khong don dieu";
}

int main() {
	do {
		system("cls");
		cout << "Nhap so nguyen duong (n > 100): ";
		cin >> n;
	} while (n <= 100);

	while (n > 0) {
		a[len_n++] = n % 10;
		n /= 10;
	}
	cout << DonDieu(a, len_n) << endl;
}	