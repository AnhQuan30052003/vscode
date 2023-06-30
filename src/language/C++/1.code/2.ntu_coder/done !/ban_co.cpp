#include <iostream>
using namespace std;

int a[9][9];

void xuLyXe(int x, int y) {
	for (int i = 1; i <= 8; i++) {
		a[x][i] = 1;
		a[i][y] = 1;
	}
}

void xuLyTuong(int x, int y) {
	a[x][y] = 1;
	// Xu ly phan tren
	for (int i = x-1, j = y-1; i >= 1 && j >= 1; i--, j--)
		a[i][j] = 1;
	for (int i = x-1, j = y+1; i >= 1 && j <= 8; i--, j++)
		a[i][j] = 1;

	// xu ly phan duoi
	for (int i = x+1, j = y-1; i <= 8 && j >= 1; i++, j--)
		a[i][j] = 1;
	for (int i = x+1, j = y+1; i <= 8 && j <= 8; i++, j++)
		a[i][j] = 1;	
}

int main() {
	int ax, bx, at, bt;
	cin >> ax >> bx >> at >> bt;

	xuLyXe(ax, bx);
	xuLyTuong(at, bt);

	int tong = 0;
	for (int i = 1; i <= 8; i++)
		for (int j = 1; j <= 8; j++)
			if (a[i][j] == 1)
				++tong;
	cout << tong;
}