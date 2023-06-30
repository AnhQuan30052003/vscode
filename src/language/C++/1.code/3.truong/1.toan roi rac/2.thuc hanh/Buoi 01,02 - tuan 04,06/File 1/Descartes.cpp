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

void Descartes(int na, int nb, int& nc, int* a, int* b, int* c) {
	nc = 0;
	for (int i = 0; i < na; i++) {
		for (int j = 0; j < nb; j++)
			c[nc++] = a[i] * b[j];
	}
}

void Print(int* array, int size) {
	cout << "Tich Descartes cua A va B la:" << endl;
	cout << "{";
	for (int i = 0; i < size; i++) {
		cout << array[i] << (i == size-1 ? "" : ",");
	}
	cout << "}";
}

int main() {
	int na, nb, nc;
	int a[50], b[50], c[100];
	Input_Set(na, nb, a, b);
	Descartes(na, nb, nc, a, b, c);
	Print(c, nc);
}