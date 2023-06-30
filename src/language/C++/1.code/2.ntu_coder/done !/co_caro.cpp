#include <iostream>
using namespace std;

// Gia toc chuyen huong
int tx[4] = { 0,+1,+1,+1};
int ty[4] = {+1,+1, 0,-1};

char a[21][21];
int dem_x = 1, dem_o = 1;
bool Ti_thang = false, Teo_thang = false;
int huong;

void ThuX(int x, int y) {
	if (Ti_thang)
		return;
	for (int i = 0; i < 4; i++) {
		int p = x + tx[i];
		int q = y + ty[i];
		if (a[p][q] == 'x') {
			if (dem_x == 1) {
				huong = i;
			}
			if (i == huong) {
				x = p;
				y = q;
				++dem_x;
				if (dem_x == 5) {
					Ti_thang = true;
				}
				ThuX(x, y);
				--dem_x;
				x -= tx[i];
				y -= ty[i];
			}
			else continue;
		}
	}
}

void ThuO(int x, int y) {
	if (Teo_thang)
		return;
	for (int i = 0; i < 4; i++) {
		int p = x + tx[i];
		int q = y + ty[i];
		if (a[p][q] == 'o') {
			if (dem_o == 1) {
				huong = i;
			}
			if (i == huong) {
				x = p;
				y = q;
				++dem_o;
				if (dem_o == 5) {
					Teo_thang = true;
				}
				ThuO(x, y);
				--dem_o;
				x -= tx[i];
				y -= ty[i];
			}
			else continue;
		}
	}
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];

	// Thu kiem tra X
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] == 'x')
				ThuX(i, j);

	// Thu kiem tra O
	if (!Ti_thang)
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				if (a[i][j] == 'o')
					ThuO(i, j);

	if (Ti_thang)
		cout << "Ti wins";
	else if (Teo_thang)
		cout << "Teo wins";
	else
		cout << "Not yet";
}