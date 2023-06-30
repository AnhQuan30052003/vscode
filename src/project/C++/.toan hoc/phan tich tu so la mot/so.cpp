// Code rieng cua em
// Cho mot phan so, sau do phan tich so do thanh cac so khac sao cho tu luon la 1 va so luong cac so la nho nhat
#include <bits/stdc++.h>
using namespace std;

int tu, mau;

void phan_tich(int tu, int mau)
{
    if (tu == 1) { cout << "1/" << mau; exit(0); }
    else if (tu == 0) { cout << '0'; exit(0); }
    else
    {
        int mau_tim_duoc = ceil((float) mau/tu);
        cout << "1/" << mau_tim_duoc;

        tu = tu * mau_tim_duoc - mau;
        mau = mau * mau_tim_duoc;

        cout << " + ";
        phan_tich(tu, mau);
    }
}

int main()
{
    cout << "\n Nhap tu & mau: "; cin >> tu >> mau;
    cout << ' ' << tu << '/' << mau << " = ";
    phan_tich(tu, mau);
}