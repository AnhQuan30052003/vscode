#include <iostream>
using namespace std;

char a[13], b[13], c[13]; // c[] khong gian luu tru cac gia tri khac nhau
char bai[13] = {'3','4','5','6','7','8','9','T','J','Q','K','A','2'};
int xh[13];
int dem_2 = 0;

// Xu ly phan loai bai
void XuLy() {
	for (int i = 0; i < 13; i++) {
		if (a[i] == '2') ++dem_2;
		for (int j = 0; j < 13; j++) {
			if (a[i] == bai[j])
				++xh[j];
		}
	}
}

bool KetQua() {
	XuLy();
	if (dem_2 == 4) return true;

	int dem_khac_nhau = 0, dem_6_doi_khac_nhau = 0, dem_5_doi_lien_tiep = 1;
	for (int i = 0; i < 13; i++) {
		if (xh[i] == 1) ++dem_khac_nhau;
		if (xh[i] >= 2) {
			if (xh[i] == 2 || xh[i] == 3) dem_6_doi_khac_nhau += 1;
			else if (xh[i] == 4) dem_6_doi_khac_nhau += 2;

			if (dem_5_doi_lien_tiep == 5) return true;
			if (xh[i+1] == 2) ++dem_5_doi_lien_tiep;
			else dem_5_doi_lien_tiep = 1;
		}
	}
	
	if (dem_khac_nhau == 13 || dem_6_doi_khac_nhau == 6) return true;
	return false;
}

int main() {
	for (int i = 0; i < 13; i++) {
		cin >> a[i] >> b[i];
	}
		
	if (KetQua()) cout << "YES";
	else cout << "NO";
}