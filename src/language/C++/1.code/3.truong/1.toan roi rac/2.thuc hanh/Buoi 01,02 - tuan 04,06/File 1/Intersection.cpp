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

void Intersection(int na, int nb, int& nc, int*a, int* b, int* c) {
	nc = 0;
	for (int i = 0; i < na; i++) {
		for (int j = 0; j < nb; j++)
			if (a[i] == b[j]) {
				c[nc] = a[i];
				++nc;
				break;
			}
	}
}

void Print(int* a, int size) {
	cout << "Giao cua 2 tap A, B la: ";
	for (int i = 0; i < size; i++) {
		cout << a[i] << ' ';
	}
}

int main() {
	int na, nb, nc;
	int a[50], b[50], c[50];
	Input_Set(na, nb, a, b);
	Intersection(na, nb, nc, a, b, c);
	Print(c, nc);
}