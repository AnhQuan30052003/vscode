/* Chuong trinh ban hoa don dien tin khi gui tin nhan, su dung menh gia tien !
Voi moi tu binh thuong thi don gia la 100d/tu
Voi tu hon 8 ki tu thi don gian la 150d/tu
*/

#include <iostream>
using namespace std;

// Chuong trinh con ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
// Ham xu ly tu thuong va tu qua dai
void DemTu(string text, int& tu_thuong, int& tu_nhieu) {
	// Toi uu tu vung gan nhat
	int x = 0;
	while (x < text.size() && text[x] == ' ') {
		++x;
	}

	// Tien hanh dem tu trong text
	int dem_tu = 1;
	int diem_do_dai = 0;
	for (int i = x; i < text.size(); i++) {
		if (text[i] == ' ' || i == text.size()-1) {
			if (diem_do_dai > 8)
				++ tu_nhieu;
			if (text[i+1] != ' ' && i+1 < text.size())
				++dem_tu;
			diem_do_dai = 0;
		}
		else ++diem_do_dai;
	}
	tu_thuong = dem_tu - tu_nhieu;
}

// Nhan ket qua va xuat 
void XuLyText(string text) {
	int tu_thuong = 0, tu_nhieu = 0;
	DemTu(text, tu_thuong, tu_nhieu);
	cout << endl;
	cout << "\t+------------------------<[ HOA DON ]>------------------------+" << endl;
	cout << "\t|-------------------------------------------------------------|\n";
	printf("\t| So tu da nhap:                     | %3d               tu   |\n", tu_thuong + tu_nhieu);
	printf("\t| So tu co kinh thuoc binh thuong:   | %3d x 100 = %5d dong |\n", tu_thuong, tu_thuong * 100);
	printf("\t| So tu co kinh thuoc > 8 ki tu:     | %3d x 150 = %5d dong |\n", tu_nhieu, tu_nhieu * 150);
	printf("\t| Tong cong:                         |             %5d dong |\n", tu_thuong*100 + tu_nhieu*150);
	cout << "\t+-------------------------------------------------------------+";

}
// Chuong trinh con ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//

// Chuong trinh chinh ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
int main() {
	string text;
	do {
		system("cls");
		cout << "Nhap noi dung can gui: ";
		getline(cin, text);
	} while (text.empty());
	XuLyText(text);
}
// Chuong trinh chinh ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//