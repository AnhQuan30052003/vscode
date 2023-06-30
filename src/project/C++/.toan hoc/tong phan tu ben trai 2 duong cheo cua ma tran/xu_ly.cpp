#include <iostream>
#include <fstream>
using namespace std;

int n;
int a[10][10];

void lay_du_lieu() {
	string path = "ma_tran.txt";
	ifstream file (path);
	file >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			file >> a[i][j];
}

int tinh() {
	int tong = 0;
	int diem_chuan = (n-1)/2;

	for (int i = diem_chuan; i > 0; i--)
		for (int j = 0; j < i; j++)
			tong += a[i][j];

	for (int i = diem_chuan+1; i < n-1; i++)
		for (int j = 0; j < n-1 - i; j++)
			tong += a[i][j];

	return tong;			
}

int main() {
	lay_du_lieu();
	cout << "Tong la: " << tinh();
}