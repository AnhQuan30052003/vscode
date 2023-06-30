#include <iostream>
#include <fstream>
using namespace std;

int n;
int a[50], b[50];

void DocDuLieu() {
	string path = "thong_tin_cuoc_hop.txt";
	ifstream file(path);
	file >> n;
	for (int i = 0; i < n; i++)
		file >> a[i];
	for (int i = 0; i < n; i++)
		file >> b[i];
}

void SapXep() {
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++)
            if (a[i] > a[j]) {
				swap(a[i], a[j]);
				swap(b[i], b[j]);
			}
	}
}

int Chon() {
	int dem = 1;
	for (int i = 0; i < n-1; i++)
		if (b[i] <= a[i+1]) dem++;
	return dem;
}

int main() {
	DocDuLieu();
	SapXep();
	cout << "So cuoc hop nhieu nhat: " << Chon();
}