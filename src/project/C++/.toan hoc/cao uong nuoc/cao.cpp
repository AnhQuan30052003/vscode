// De bai: cho mot cai binh nuoc sau va co nuoc o cuoi, va mot con cao muon uong nuoc trong do, co the dung da de nang nuoc le va uong
#include <iostream>
#include <algorithm>
using namespace std;

int soi[] = {1,34,2,5,6,10};
int n = sizeof(soi)/sizeof(int);
int v, v_bo = 0;

void chon() {
    sort(soi, soi+n, greater<int>());
    for (int i = 0; i < n; i++)
        if (v_bo + soi[i] <= v) {
            v_bo += soi[i];
            cout << ' ' << soi[i];
        }   
}

int main() {
    cout << "Nhap the tich: ";
    cin >> v;
    cout << "Cac vien soi duoc bo vao:";
    chon();
    cout << "\nBo duoc: " << v_bo << '/' << v << " the tich.";
}