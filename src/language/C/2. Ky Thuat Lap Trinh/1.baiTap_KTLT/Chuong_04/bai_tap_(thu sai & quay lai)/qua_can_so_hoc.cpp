#include <bits/stdc++.h>

int qua[100];
int trang_thai[100];

int n, kiem_tra_sai = 0;

void nhap_mang()
{
    for (int k = 0; k < n; k++)
        scanf("%d", &qua[k]);
}

void kiem_tra_ket_qua()
{
    int s1 = 0, s2 = 0;
    for (int k = 0; k < n; k++)
    {
        if (trang_thai[k] == -1) s1 += qua[k];
        if (trang_thai[k] == 1) s2 += qua[k];
    }

    if ((s1 == s2) && (s1 != 0))
    {
        printf("\n-----------------------\n");
        printf(" Dia trai: ");
        for (int k = 0; k < n; k++)
            if (trang_thai[k] == -1) printf("%3d", qua[k]);

        printf("\n Dia phai: ");
        for (int k = 0; k < n; k++)
            if (trang_thai[k] == 1) printf("%3d", qua[k]);
    }
    else kiem_tra_sai++;
}

void thu(int vt)
{
    for (int i = -1; i <= 1; i++)
    {
        trang_thai[vt] = i;
        if (vt < n-1) thu(vt+1);
        else kiem_tra_ket_qua();
        trang_thai[vt] = 0;
    }
}

int main()
{
    int gh;
    printf("\n Nhap n = "); scanf("%d", &n);
    nhap_mang();
    thu(0);
    gh = pow(3,n);
    if (kiem_tra_sai == gh) printf(" Mang vua nhap khong co so nao can lai bang nhau !");
}