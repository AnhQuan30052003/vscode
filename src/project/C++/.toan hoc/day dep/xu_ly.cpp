#include <iostream>
#include <fstream>
using namespace std;

int n;
int a[50];

void lay_du_lieu() {
	ifstream file("day_so.txt");
	file >> n;
	for (int i = 1; i <= n; ++i)
		file >> a[i];
}

int day_dep() {
	int dem_so_can_xoa = 0;
	for (int i = 1; i <= n; i++) {
		int dem_xuat_hien = 0;
		for (int j = 1; j <= n; ++j)
			if (a[j] == a[i])
				++dem_xuat_hien;

		if (dem_xuat_hien != a[i])
			++dem_so_can_xoa;
	}
	return dem_so_can_xoa;
}

int main() {
	lay_du_lieu();
	cout << "Nhung so can xoa: " << day_dep();
}