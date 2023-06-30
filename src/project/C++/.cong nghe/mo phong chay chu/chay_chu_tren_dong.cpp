#include <iostream>
#include <windows.h>
using namespace std;

void ChayChu(string text) {
	system("cls");
	for (char s : text) {
		Sleep(100);
		cout << s;
	}
}

void LayVanban(string& text) {
	cout << "Nhap mot dong ki tu & ket thuc bang phim \"Enter\":";
	Sleep(2500);
	system("cls");
	getline(cin, text);
}

int main() {
	string text;
	LayVanban(text);
	ChayChu(text);
}