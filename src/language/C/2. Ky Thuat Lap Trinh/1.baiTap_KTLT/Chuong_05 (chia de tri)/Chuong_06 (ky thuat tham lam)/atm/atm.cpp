// viet mot chuong trinh thoi tien cua cay ATM voi dieu kien tien thoi khong bao gio thieu, nhung phai lam sao de doi tien voi so to it nhat
#include <bits/stdc++.h>
using namespace std;

int so_tien_doi;
int luu_sl_tien_doi[10];
int tien[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
int sl_tien[] = {0,0,0,1,5,0,0,0,0};
int n = sizeof(tien)/sizeof(tien[0]);
int su_dung[10];

void in_tien_doi()
{
    for (int i = 0; i < n; i++)
        if (su_dung[i] == 1)
            cout << "\n " << luu_sl_tien_doi[i] << " to " << tien[i];
}

int doi_tien()
{
    for (int i = 0; i < n; i++)
        if (so_tien_doi - tien[i] >= 0 && sl_tien[i] > 0)
        {
            su_dung[i] = 1;
            so_tien_doi -= tien[i];
            sl_tien[i] -= 1;
            luu_sl_tien_doi[i] += 1;
            if (so_tien_doi == 0) return true;
            else if (i < n-1) return doi_tien();
            else break;
        }
    return false;
}

int main()
{
    cout << "\n Nhap so can doi: "; cin >> so_tien_doi;
    int m = so_tien_doi;
    if (doi_tien())
    {
        cout << " So tien doi duoc:";
        in_tien_doi();
    }
    else cout << " May hien khong the doi duoc so tien: " << m;
}