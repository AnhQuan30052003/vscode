// Doc so toi da 6 chu so
#include <iostream>
using namespace std;

void DocTungSo(int x) {
	if (x == 0) cout << "khong";
	if (x == 1) cout << "mot";
	if (x == 2) cout << "hai";
	if (x == 3) cout << "ba";
	if (x == 4) cout << "bon";
	if (x == 5) cout << "nam";
	if (x == 6) cout << "sau";
	if (x == 7) cout << "bay";
	if (x == 8) cout << "tam";
	if (x == 9) cout << "chin";
}

void LaySoN(int* a, int n) {
	int i = 1;
	while (n > 0) {
		a[i++] = n % 10;
		n /= 10;
	}
}

int DemSoTrongN(int n) {
	int dem = 0;
	while (n != 0) {
		++dem;
		n /= 10;
	}
	return dem;
}

void DocSo(int* a, int size) {
	// Phan doc
	for (int i = size; i >= 1; i--) {
		if (a[i] == 1 && (i == 2 || i == 5)) {
			cout << "muoi ";
			continue;
		}
		else if (a[i] == 0) {
			if ((i == 2 || i == 5) && a[i-1] != 0)
				cout << "le ";
			else if (i == 3 && (a[2] != 0 || a[1] != 0)) DocTungSo(a[i]);
			else if (i == 4) {
				cout << "nghin ";
				continue;
			}
			else continue;
		}
		else if (a[i] == 5 && i == 1 && i != size && a[i+1] != 0)
			cout << "lam";
		else DocTungSo(a[i]);

	// Phan them
		if ((i == 2 || i == 5) && a[i] != 0)
			cout << " muoi ";
		else if (i == 3 || i == 6)
			cout << " tram ";
		else if (i == 4) {
			cout << " nghin ";
		}
	}
}

int main() {
	int n;
	cin >> n;
	int size = DemSoTrongN(n);
	int a[size];
	LaySoN(a, n);
	if (n == 0) cout << "khong";
	else DocSo(a, size);
}