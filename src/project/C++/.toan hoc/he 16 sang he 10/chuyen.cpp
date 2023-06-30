// Chuong trinh nhap vao mot so (he 16) va xuat ra gia tri (he 10) cua no !
// Phan thu vien ----------------------------------------------------------------------------------------------
#include <iostream>
#include <cmath>
using namespace std;
// Phan thu vien ----------------------------------------------------------------------------------------------

// Bien gia tri -----------------------------------------------------------------------------------------------
int n;
int a[30];
string chuoi;
// Bien gia tri -----------------------------------------------------------------------------------------------

// Chuong trinh con -------------------------------------------------------------------------------------------
// Ham dao nguoc chuoi
void DaoChuoi() {
	string c = chuoi;
	for (int i = 0; i < n; i++)
		chuoi[i] = c[n-1-i];
}

// Ham xu ly du lieu khi nhap vao
void XuLyNhapVao() {
	cout << "Nhap chuoi he 16: ";
	getline(cin, chuoi);

	n = chuoi.size();
	DaoChuoi();

	// Kiem tra chuoi
	bool kiem_tra_sai = true;
	for(int i = 0; i < n; i++)
		if (!((chuoi[i] >= 'A' && chuoi[i] <= 'F' || chuoi[i] >= 'a' && chuoi[i] <= 'f') || (chuoi[i] >= '0' && chuoi[i] <= '9'))) {
			kiem_tra_sai = false;
			break;
		}

	// Thoat chuong trinh neu he 16 nhap vao khong dung
	if (kiem_tra_sai == false) {
		DaoChuoi();
		cout << "He thap luc phan khong dung ki so nay: " << chuoi;
		exit(false);
	}
}

// Chuyen doi sang he 10
void ChuyenDoiGiaTri() {
	a[n];
	char c[1];
	for (int i = 0; i < n; ++i)
		if (chuoi[i] >= '0' && chuoi[i] <= '9') {
			c[0] = chuoi[i];
			a[i] = atoi(c);
		}
		else
			switch(chuoi[i]) {
				case 'a':
				case 'A':
					a[i] = 10;
					break;
				case 'b':
				case 'B':
					a[i] = 11;
					break;
				case 'c':
				case 'C':
					a[i] = 12;
					break;
				case 'd':
				case 'D':
					a[i] = 13;
					break;
				case 'e':
				case 'E':
					a[i] = 14;
					break;
				case 'f':
				case 'F':
					a[i] = 15;
					break;
			}
}

// Uoc tinh gia tri
long long TinhToan() {
	long long tong = 0;
	for (int i = 0; i < n; i++)
		tong += a[i] * pow(16,i);
	return tong;
}
// Chuong trinh con -------------------------------------------------------------------------------------------

// Chuong trinh chinh -----------------------------------------------------------------------------------------
int main() {
	XuLyNhapVao();
	ChuyenDoiGiaTri();
	cout << "He 10: " << TinhToan() << endl;
}
// Chuong trinh chinh -----------------------------------------------------------------------------------------