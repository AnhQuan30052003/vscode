// Vẻ hình vuông bằng mảng 1 chiều !
#include <iostream>
#include <cmath>
using namespace std;

void VeHinhVuong(int n) {
	system("cls");
	int len_max = n*n;	// lay kinh thuoc toi da cua hinh vuong
	int a[len_max];

	int dong = 1;
	for (int i = 0; i < len_max; i++)
		if (i < n || i % n == 0 || i == n*dong-1 || i == (len_max-1 - dong+abs(len_max-1-i-n))) {
			cout << "* ";
			if (i == n*dong-1) {
				cout << endl;
				++dong;
			}
		}
		else cout << "  ";
}

int main() {
	int n;
	cout << "Nhap kich thuoc: ";
	cin >> n;
	VeHinhVuong(n);
}