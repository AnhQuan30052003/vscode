#include <iostream>
#include <windows.h>
using namespace std;

int main() {
	int bat_dau = 1, ket_thuc = 0;
	bool xuong = true;
	while (true) {
		int i;
		if (xuong) {
			for (i = bat_dau; i <= ket_thuc; i++) {
				cout << endl;
			}
			cout << "\t\t\t\t\t Nguyen Anh Quan !";
		}
		else {
			for (i = ket_thuc; i >= bat_dau; i--) {
				cout << endl;
			}
			cout << "\t\t\t\t\t Nguyen Anh Quan !";
		}
		Sleep(50);
		system("cls");
		if (xuong) {
			if (ket_thuc == 29) xuong = false;
			else ++ket_thuc;
		}
		if (!xuong) {
			if (ket_thuc == 0) xuong = true;
			else --ket_thuc;
		}
	}
}