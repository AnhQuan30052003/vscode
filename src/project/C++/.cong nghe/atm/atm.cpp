/// Chuong trinh doi tien ATM ///

// Thu vien -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <algorithm>
#include <windows.h>
using namespace std;
// Thu vien -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// Cac bien so ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
int so_tien_can_doi;
int tien[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
int n = sizeof(tien)/sizeof(int);
int sl_tien_1[] = {10,10,10,10,10,10,10,10,10};
int sl_tien_2[9];
int luu_sl_tien_doi_1[9], luu_sl_tien_doi_2[9];
int su_dung[9];
bool lap = true;
// Cac bien so -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// Chuong trinh con ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Ham in ket qua sau khi doi thanh cong
void InTienDoi(int* luu_sl_tien_doi) {
    cout << "So tien doi duoc:" << endl;
    for (int i = 0; i < n; i++)
        if (su_dung[i] == 1) {
            Sleep(1000);
            cout << luu_sl_tien_doi[i] << " to " << tien[i] << endl;
        }
}

// Ham kiem tra doi tien duoc hay khong
bool DoiTien(int so_tien, int* sl_tien, int* luu_sl_tien_doi) {
    for (int i = 0; i < n; i++)
        if (so_tien - tien[i] >= 0 && sl_tien[i] > 0) {
            su_dung[i] = 1;
            so_tien -= tien[i];
            sl_tien[i] -= 1;
            luu_sl_tien_doi[i] += 1;
            if (so_tien == 0) return true;
            else if (i < n-1) return DoiTien(so_tien, sl_tien, luu_sl_tien_doi);
            else break;
        }
    return false;
}

// Phuong an doi tien lan 2 neu lan 1 khong doi duoc
void DoiTienLan2() {
    sort(tien, tien+n);
    for (int i = 0; i < n; i++) {
        su_dung[i] = 0;
        sl_tien_2[i] = sl_tien_1[n-1-i] + luu_sl_tien_doi_1[n-1-i];
    }
}

// Ham restart lai chuong trinh doi voi cac bien so van con giu nguyen
void CaiLaiChuongTrinh() {
    for (int i = 0; i < 10; i++)
        su_dung[i] = luu_sl_tien_doi_1[i] = luu_sl_tien_doi_2[i] = 0;
    sort(tien, tien+n, greater<int>());
}

// Ham hoi tiep tuc giao dich doi tien hay khong !
void TiepTuc() {
    fflush(stdin);
    string tra_loi;
    while (true) {
        cout << "\nBan co muon tiep tuc giao dich? (co/khong): ";
        getline(cin, tra_loi);
        if (tra_loi == "co" || tra_loi == "khong") break;
        system("cls");
    }
    if (tra_loi == "khong") lap = false;
    else {
        CaiLaiChuongTrinh();
        system("cls");
    }
}
// Chuong trinh con ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// Chuong trinh chinh ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
int main() {
    while (lap) {
        int m;
        cout << "Nhap so tien can doi: ";
        cin >> so_tien_can_doi;
        m = so_tien_can_doi;

        if (DoiTien(m, sl_tien_1, luu_sl_tien_doi_1))
            InTienDoi(luu_sl_tien_doi_1);
        else {
            m = so_tien_can_doi;
            DoiTienLan2();
            if (DoiTien(m, sl_tien_2, luu_sl_tien_doi_2))
                InTienDoi(luu_sl_tien_doi_2);
            else
                cout << "Hien tai may khong the doi duoc so tien: " << so_tien_can_doi << endl;
        }
        TiepTuc();
    }
}
// Chuong trinh chinh ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------