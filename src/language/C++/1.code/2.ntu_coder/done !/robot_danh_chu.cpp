#include <iostream>
using namespace std;

string phim[10] = {"_0", ".,?!1", "abc2", "def3", "ghi4", "jkl5", "mno6", "pqrs7", "tuv8", "wxyz9"};
int vt;
long long tong;

// Ket qua kiem tra tung phim
bool TimKyTu(string s, int x, char c) {
	for (int i = 0; i < s.size(); i++) {
		if (c == s[i]) {
			if (x != vt) {
				++tong;
				vt = x;
			}
			tong += i+1;
			return true;
		}
	}
	return false;
}

// Lay ki tu di kiem tra voi tung phim
void DemKyTu(char c) {
	for (int i = 0; i < 10; i++) {
		if (TimKyTu(phim[i], i, c))
			return;
	}
}

// xuly tung ky tu trong dong voi noidung chuoi & do dai chuoi da biet !
void XuLy(string text, int size) {
	tong = 0;
	vt = 1;
	for (int i = 0; i < size; i++) {
		DemKyTu(text[i]);
	}
}

int main() {
	int n;
	cin >> n;
	string text[n];
	for (int i = 0; i < n; i++) {
		cin >> text[i];
	}

	// Xu ly tung dong
	for (int i = 0; i < n; i++) {
		XuLy(text[i], text[i].size());
		cout << tong << endl;
	}
}