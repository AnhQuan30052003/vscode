// Cho so ban nam, chieu cao tung ban; cho so ban nu, chieu cao tung ban trong mot file
// yeu cau: tim so cap co the khieu vu nhieu nhat co the voi dieu kien la ban nam phai luon cao hon ban nu
#include <bits/stdc++.h>
using namespace std;

fstream file;
int so_nam, so_nu;
int chieu_cao_nam[10], chieu_cao_nu[10];
int chon[10];
int dem_cap = 0;

void doc_du_lieu()
{
    file.open("thong_tin.inp", ios::in);
    file >> so_nam >> so_nu;

    for (int i = 0; i < so_nam; i++) file >> chieu_cao_nam[i];
    sort(chieu_cao_nam, chieu_cao_nam+so_nam, greater<>());

    for (int i = 0; i < so_nu; i++) file >> chieu_cao_nu[i];
    sort(chieu_cao_nu, chieu_cao_nu+so_nu, greater<>());

    file.close();
}

int tim(int chieu_cao_nam[], int vt)
{
    for (int i = vt; i < so_nu; i++)
        if (chieu_cao_nam[vt] > chieu_cao_nu[i] && chon[i] == 0)
        {
            dem_cap++;
            chon[i] = 1;
            if (vt < so_nam-1) return tim(chieu_cao_nam, vt+1);
        }

    return dem_cap;
}

int main()
{
    doc_du_lieu();
    cout << "\n So cap nhieu nhat co the: " << tim(chieu_cao_nam, 0);
}