// cho N qua bong va yeu cau danh cho den khi hoan thanh luyen tap
// Buoi luyen tap chi ket thuc khi thoa dieu kien: danh trung hay danh het bong, danh het bong nghia lat ca deu trat
#include <bits/stdc++.h>
using namespace std;

int n;
int dem = 0;
int tt[50];

void kiem_tra()
{
    int danh_trat = 0;
    int dem_thu = 0;
    for (int i = 1; i <= n; i++)
    {
        if (tt[i] == 1) dem_thu++;
        else danh_trat++;
    }

    if (danh_trat == n || dem_thu == 1) dem++;
}

void thu(int vt)
{
    for (int i = 0; i <= 1; i++)
    {
        tt[vt] = i;
        if (vt < n) thu(vt+1);
        else kiem_tra();
        tt[vt] = 0;
    }
}

int main()
{
    cout << "\n Nhap so qua bong An co: "; cin >> n;
    thu(1);
    cout << " So truong hop: " << dem;
}