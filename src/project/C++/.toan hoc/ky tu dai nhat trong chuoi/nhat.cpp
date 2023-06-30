// Tim ky tu xuat hien nhieu nhat trong mot chuoi
#include <iostream>
using namespace std;

// Sap xep cac chu cai trong ten theo huong tang dan
void SapXepTangDan(string& ten) {
    for (int i = 0; i < ten.size()-1; i++)
        for (int j = i+1; j < ten.size(); j++)
            if (ten[i] > ten[j]) {
                char x = ten[i];
                ten[i] = ten[j];
                ten[j] = x;
            }
}

// Tinh toan 
void XuatHienNhieuNhat(string ten) {
    SapXepTangDan(ten);

    char chon_chinh, chon_phu;
    int dem_chinh = 0, dem_phu = 0;

    int i;
    for (i = 0; i < ten.size(); i++) {
        if (ten[i] == ' ') continue;
        chon_chinh = ten[i];
        break;
    }

    for (i; i < ten.size(); i++) {
        if (ten[i] == ' ') continue;
        if (ten[i] == chon_chinh) ++dem_chinh;
        else if (ten[i] == chon_phu) ++dem_phu;
        else {
            chon_phu = ten[i];
            dem_phu = 1;
        }
        if (dem_phu > dem_chinh) {
            chon_chinh = chon_phu;
            dem_chinh = dem_phu;
        }
    }
    cout << "Ky tu xuat hien nhat: " << chon_chinh << endl;
    cout << "So lan xuat hien: " << dem_chinh;
}

// Chuong trinh chinh
int main() {
    string ten;
    while (true) {
        cout << "Nhap ten: ";
        getline(cin, ten);
        if (!ten.empty()) break;
        system("cls");
    }
    XuatHienNhieuNhat(ten);
}