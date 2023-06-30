# include <bits/stdc++.h>
using namespace std;

fstream file;
int n;
int arr7[100];
int tt[50], tong, p = 55;
int tt_nhieu_so[50];

// cau a (nhap tat ca du lieu da cho trong file vao mang arr7[])
void doc_file()
{
    file.open("input.dat", ios::in);
    if (file.fail()) cout << "\n Mo file khong thanh cong !";
    else
    {
        file >> n;
        for (int i = 0; i < n; i++) file >> arr7[i];
        file.close();
    }
}

// cau b (dem so phan tu chan trong mang bang de quy)
int dem_chan(int vt)
{
    if (vt == n) return 0;
    if (arr7[vt] % 2 == 0) return 1 + dem_chan(vt+1);
    else return dem_chan(vt+1);
}

// cau c (in so chan vua tim duoc vao file: out.dat)
void ghi_file()
{
    file.open("out.dat", ios::out);
    if (file.fail()) cout << "\n Mo file khong thanh cong !";
    else
    {
        file << dem_chan(0);
        file.close();
    }
}

// cau d (tim xem co day con nao co tong bang 25)
void kiem_tra()
{
    if (tong == p)
    {
        cout << endl;
        for (int i = 0; i < n; i++)
            if (tt[i] == 1) cout << ' ' << arr7[i];
    }
}

void thu(int vt)
{
    for (int i = 0; i <= 1; i++)
    {
        tt[vt] = i;
        if (i == 1) tong += arr7[vt];
        if (vt < n-1 && tong < p) thu(vt+1);
        else kiem_tra();
        if (i == 1) tong -= arr7[vt];
        tt[vt] = 0;
    }
}

// cau e (dung ky thuat tham lam de hien thi nhieu nhat ca phan tu cua mang arr7[] co tong <= 55)
void tham_lam_tim_tong(int vt)
{
    tong += arr7[vt];
    if (tong < p) cout << ' ' << arr7[vt];
    if (vt < n-1) tham_lam_tim_tong(vt+1);
}

int main()
{
    doc_file();
    cout << "\n File vua doc co " << dem_chan(0) << " so chan";
    ghi_file();
    thu(0);
    sort(arr7, arr7+n);
    cout << "\n Cac phan tu tong <= " << p << " nhieu nhat la:";
    tham_lam_tim_tong(0);
}