// Bai toan balo su dung phuong phap nhanh can 
#include <bits/stdc++.h>

int V[] {1,2,3};
int G[] {5,4,4};
int V_max;
int tong_thu_V = 0, tong_thu_G = 0;
int luu_V_bo_duoc, luu_G_bo_duoc;
int G_max = 0;
int n = sizeof(V)/sizeof(V[0]);
int trang_thai[50];
int chon[50];

void kiem_tra()
{
    
    if (tong_thu_V <= V_max)
        if (tong_thu_G > G_max)
        {
            G_max = tong_thu_G;
            for (int i = 0; i < n; i++) chon[i] = trang_thai[i];
            luu_V_bo_duoc = tong_thu_V;
            luu_G_bo_duoc = tong_thu_G;
        }
}

void thu(int vt)
{
    for (int i = 0; i <= 1; i++)
    {
        trang_thai[vt] = i;
        if(i == 1)
        {
            tong_thu_V += V[vt];
            tong_thu_G += G[vt];
        }

        if ((vt < n-1) && (tong_thu_V < V_max)) thu(vt+1);
        else kiem_tra();

        if(i == 1)
        {
            tong_thu_V -= V[vt];
            tong_thu_G -= G[vt];
        }
        trang_thai[vt] = 0;
    }
}

int main()
{
    printf("\n Nhap V max = "); scanf("%d", &V_max);
    thu(0);
    printf("\n Bo duoc the tich V = %d/%d cua balo voi gia tri cao nhat la: %d", luu_V_bo_duoc, V_max, luu_G_bo_duoc);
    for (int i = 0; i < n; i++)
        if (chon[i] == 1) printf("\n V = %2d, GT = %2d", V[i], G[i]);
}