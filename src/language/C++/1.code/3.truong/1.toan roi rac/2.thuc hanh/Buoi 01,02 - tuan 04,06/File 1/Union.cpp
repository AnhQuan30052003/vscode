#include <iostream>
using namespace std;

void Input_Set(int& na, int& nb, int* a, int *b) {
	do {
		cout << "Nhap kich thuoc tap hop A: ";
		cin >> na;
	} while (na < 0);
	a[na];
	cout << "Nhap cac phan tu cua tap hop A: ";
	for (int i = 0; i < na; i++) {
		cin >> a[i];
	}

	do {
		cout << "Nhap kich thuoc tap hop B: ";
		cin >> nb;
	} while (nb < 0);
	cout << "Nhap cac phan tu cua tap hop B: ";
	b[nb];
	for (int i = 0; i < nb; i++) {
		cin >> b[i];
	}
}

void Union(int na, int nb, int& nc, int* a, int* b, int* c) {
	bool kt;
	nc = 0;
	for (int i = 0; i < na; i++) {
		c[nc++] = a[i];
	}
	for (int i = 0; i < nb; i++) {
		kt = false;
		for (int j = 0; j < na; j++) {
			if (b[i] == a[j]) {
				kt = true;
				break;
			}
		}
		if (!kt)
			c[nc++] = b[i];
	}
}

void Print(int* a, int size) {
	cout << "Hop cua 2 tap A, B la: ";
	for (int i = 0; i < size; i++) {
		cout << a[i] << ' ';
	}
}

int main() {
	int na, nb, nc;
	int a[50], b[50], c[100];
	Input_Set(na, nb, a, b);
	Union(na, nb, nc, a, b, c);
	Print(c, nc);
}