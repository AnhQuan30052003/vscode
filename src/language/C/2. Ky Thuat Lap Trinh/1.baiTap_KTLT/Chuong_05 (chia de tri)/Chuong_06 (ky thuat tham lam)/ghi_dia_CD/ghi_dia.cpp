/* Cho n bai hat, va dung luong dia CD la M
n bai hat lan luoc co dung luong la: a[i...]
Viet chuong trinh tim xem can it nhat bao nhieu dia de co the luu tru het n bai hat tren
*/
#include <bits/stdc++.h>
using namespace std;

fstream file;
int n, M;
int a[100];
int chon[100];
int dem_dia = 0;

void lay_du_lieu()
{
    file.open("thong_tin.inp", ios::in);
    file >> n >> M;
    for (int i = 0; i < n; i++) file >> a[i];
    file.close();
}

void CD(int vt)
{
    int tong_thu = 0;
    if (chon[vt] != 1)
        for (int i = 0; i < n; i++)
        {
            if (chon[i] != 1)
            {
                if (tong_thu + a[i] <= M)
                {
                    chon[i] = 1;
                    tong_thu += a[i];
                }
                else if (i < n-1) continue;
                else
                {
                    dem_dia++;
                    break;
                }
            }

            if (tong_thu <= M && i == n-1) dem_dia++;
        }

    if (vt < n-1) CD(vt+1);
}

int main()
{
    lay_du_lieu();
    CD(0);
    cout << "\nSo dia: " << dem_dia;
}