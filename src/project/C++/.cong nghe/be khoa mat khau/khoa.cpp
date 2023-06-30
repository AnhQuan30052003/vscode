/// Chuong trinh be khoa mat khau voi mat khau la 10 so nguyen mot chu so ///
#include <iostream>
#include <cmath>
#include <fstream>
#include <windows.h>
using namespace std;

int n;
int password[16], pass_temp[16];
long long m = 0, dem = 0;

// Ham xoa man hinh
void clear() {
	HANDLE time;
	COORD position;
	time = GetStdHandle(STD_OUTPUT_HANDLE);
	position.X = 0; position.Y = 0;
	SetConsoleCursorPosition(time, position);
}

// lay mat khau tu file (dang khong doc duoc)
void LayPassword() {
	ifstream file("mat_khau.txt");
	file >> n;
	for (int i = 0; i < n; i++) {
		file >> password[i];
		m += password[i] * pow(10,n-1-i);
	}
}

// tien hanh kiem tra xem trung hay khong !
bool KiemTraPassword() {
	for (int i = 0; i < 4; i++)
		if (password[i] != pass_temp[i]) return false;
	return true;
}

// quy trinh kiem tra
void Thu(int vt) {
	for (int i = 0; i <= 9; i++) {
		pass_temp[vt] = i;
		if (vt == n-1) {
			if (KiemTraPassword()) {
				system("cls");
				cout << "Thanh cong !" << endl;
				cout << "Mat khau la: ";
				for (int i = 0; i < n; i++) {
					cout << pass_temp[i];
				}
				exit(false);
			}
			else cout << "Hacking...";
			double x = (double) dem++/m*100;
			printf("%.1lf", x);
			cout << "%";
			Sleep(100);
			clear();
		}
		else Thu(vt+1);
		pass_temp[vt] = 0;
	}
}

int main() {
	LayPassword();
	system("cls");
	Thu(0);
}